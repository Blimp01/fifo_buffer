#ifndef FIFO_H 
#define FIFO_H

#define FIFO_BUFFER_SIZE 256U
#define BUFFER_FULL_FLAG_SET 0U
#define BUFFER_FULL_FLAG_NOT_SET 1U

typedef struct fifo_structs
{
    unsigned int fifo_buf[FIFO_BUFFER_SIZE]; 
    unsigned int * wp; //Write Pointer
    unsigned int * rp; //Read Pointer
    unsigned int full_flag;

}fifo_struct;

void init_fifo_buf(fifo_struct * fifo);
void increment_write_pointer(fifo_struct * fifo);
void increment_read_pointer(fifo_struct *fifo);
unsigned int buf_len(fifo_struct *fifo);
#endif