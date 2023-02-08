#include <stdio.h>
#include "../fifo.h"

fifo_struct fifo;

int main()
{
    init_fifo_buf(&fifo);

    uint8_t data_1[1] = {0x31};

    printf("%p\n",fifo.wp);
    push_data(&fifo, data_1);
    printf("%p\n",fifo.wp);
    

    if (fifo.wp == (fifo.fifo_buf + 1U))
    {
        if(fifo.fifo_buf[0] == 0x31)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
}