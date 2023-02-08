#include <stdio.h>
#include "../fifo.h"

fifo_struct fifo;

int main()
{
    init_fifo_buf(&fifo);

    fifo.wp = fifo.fifo_buf + 1U;
    fifo.rp = fifo.fifo_buf + 5U; 

    unsigned a = buf_len(&fifo);

    if (a == 252U)
    {
        return 0;
    }
    else
    {
        return 1;
    }


}