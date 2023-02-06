#include <stdio.h>
#include "fifo.h"


fifo_struct fifo;

int main()
{
    init_fifo_buf(&fifo);

    fifo.wp = fifo.fifo_buf + 1U;
    fifo.rp = fifo.fifo_buf + 2U; //keep rp out of the way

    increment_write_pointer(&fifo);

    printf("%p\n",fifo.wp);
    printf("%p\n",fifo.fifo_buf);

    if (fifo.full_flag == BUFFER_FULL_FLAG_SET)
    {
        return 0;
    }
    else
    {
        return 1;
    }


}