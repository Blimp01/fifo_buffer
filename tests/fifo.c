#include "fifo.h"

void init_fifo_buf(fifo_struct * fifo)
{
     
    //Set Read and Write pointer to start of the buffer
    fifo->rp = &fifo->fifo_buf[0];
    fifo->wp = &fifo->fifo_buf[0];
    //Set full flag to false
    fifo->full_flag = BUFFER_FULL_FLAG_NOT_SET;
}

void increment_write_pointer(fifo_struct * fifo)
{
    if (fifo->full_flag == BUFFER_FULL_FLAG_NOT_SET)
    {
        //If the write pointer is at the end of the buffer, jump back to beginning
        if (fifo->wp == (fifo->fifo_buf + FIFO_BUFFER_SIZE))
        {
            fifo->wp = &fifo->fifo_buf;
        }
        else //increment the buffer
        {
            fifo->wp++;    
        }

        //has the wp reached the rp, in which case the buffer if full.
        if (fifo->wp == fifo->rp)
        {
            fifo->full_flag = BUFFER_FULL_FLAG_SET;
        }

    }
    else
    {
        //No room in our buffer, this data will be lost. 
    }
}

void increment_read_pointer(fifo_struct *fifo)
{
    fifo->rp++;
    //If we have read any byte the buffer is no longer full
    fifo->full_flag = BUFFER_FULL_FLAG_NOT_SET;
}

unsigned int buf_len(fifo_struct *fifo)
{
    //This took a while to get my head around. but it works
    return ((fifo->wp - fifo->rp + FIFO_BUFFER_SIZE) % FIFO_BUFFER_SIZE);
}

