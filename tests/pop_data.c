#include <stdio.h>
#include "../fifo.h"

fifo_struct fifo;

int main()
{
    init_fifo_buf(&fifo);

    uint8_t data_1[1] = {0x31};
    
    push_data(&fifo, data_1);
    pop_data(&fifo);    
    

    if (fifo.wp == (fifo.fifo_buf))
    {
        if (pop_data(&fifo) == FIFO_ERROR_UNDERFLOW)
        {
            return 0;
        }
    }
    else
    {
        return 1;
    }
}