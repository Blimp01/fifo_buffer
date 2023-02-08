#ifndef FIFO_H 
#define FIFO_H

#include <stdint.h>
#include <stdbool.h>

#define FIFO_OKAY            0U
#define FIFO_ERROR_PTR       1U
#define FIFO_ERROR_FULL      2U
#define FIFO_ERROR_OVERFLOW  3U
#define FIFO_ERROR_UNDERFLOW 4U

#define FIFO_BUFFER_SIZE 256U
#define BUFFER_FULL_FLAG_SET 0U
#define BUFFER_FULL_FLAG_NOT_SET 1U

typedef struct fifo_structs
{
    uint8_t fifo_buf[FIFO_BUFFER_SIZE]; 
    uint8_t * wp; //Write Pointer
    uint8_t * rp; //Read Pointer
    bool full_flag;

}fifo_struct;

uint8_t init_fifo_buf(fifo_struct * fifo);
uint8_t increment_write_pointer(fifo_struct * fifo);
uint8_t increment_read_pointer(fifo_struct *fifo);
uint32_t buf_len(fifo_struct *fifo); 
uint8_t push_data(fifo_struct *fifo, uint8_t * data);
#endif