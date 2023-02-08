#include <stdio.h>
#include "../fifo.h"

fifo_struct fifo;

int main()
{
    init_fifo_buf(&fifo);

    uint8_t data_1[1] = "A";


    if (push_data(&fifo, data_1) == FIFO_ERROR_OVERFLOW)
    {
        return 0;
    }
    else
    {
        return 1;
    }

 
}