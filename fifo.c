#include "fifo.h"

uint8_t init_fifo_buf(fifo_struct * fifo)
{
    if(fifo == NULL) {return FIFO_ERROR_PTR;}

    //Set Read and Write pointer to start of the buffer
    fifo->rp = &fifo->fifo_buf[0];
    fifo->wp = &fifo->fifo_buf[0];
    //Set full flag to false
    fifo->full_flag = false;
    return FIFO_OKAY;

}

uint8_t increment_write_pointer(fifo_struct * fifo)
{
    if(fifo == NULL) {return FIFO_ERROR_PTR;}

    if (fifo->full_flag == false)
    {
        //If the write pointer is at the end of the buffer, jump back to beginning
        if (fifo->wp == (fifo->fifo_buf + FIFO_BUFFER_SIZE))
        {
            fifo->wp = fifo->fifo_buf;
        }
        else //increment the buffer
        {
            fifo->wp++;    
        }
        //has the wp reached the rp, this means the buffer is full
        if (fifo->wp == fifo->rp)
        {
            fifo->full_flag = true;
            return FIFO_ERROR_FULL;
        }
        else
        {
            return FIFO_OKAY;
        }
    }
    else
    {
        //No room in our buffer, this data will be lost. 
        return FIFO_ERROR_FULL;
        
    }
}

uint8_t increment_read_pointer(fifo_struct *fifo)
{
    if(fifo == NULL) {return FIFO_ERROR_PTR;}

    fifo->rp++;
    //If the read pointer is at the end of the buffer, jump back to beginning
    if (fifo->rp == (fifo->fifo_buf + FIFO_BUFFER_SIZE))
    {
        fifo->rp = fifo->fifo_buf;
    }
    //If we have read any byte the buffer is no longer full
    fifo->full_flag = false;
    return FIFO_OKAY;
}

uint32_t buf_len(fifo_struct *fifo)
{
    //This took a while to get my head around. but it works 
    return ((fifo->wp - fifo->rp + FIFO_BUFFER_SIZE) % FIFO_BUFFER_SIZE);
}

uint8_t push_data(fifo_struct * fifo, uint8_t * data)
{
    if(fifo == NULL || data == NULL) {return FIFO_ERROR_PTR;}

    if (fifo->full_flag == true) 
    {
        return FIFO_ERROR_OVERFLOW;
    }
    
    *(fifo->wp) = *data;           //Write data value to wp
    increment_write_pointer(fifo); //handles pointer logic
    return FIFO_OKAY;
}

uint8_t pop_data(fifo_struct * fifo)
{
    if(fifo == NULL) {return FIFO_ERROR_PTR;}

    //Is there anything in the buffer
    if (buf_len(fifo) > 0U)
    {
        increment_read_pointer(fifo);
        return FIFO_OKAY;
    }
    else
    {
        return FIFO_ERROR_UNDERFLOW;
    }
}
