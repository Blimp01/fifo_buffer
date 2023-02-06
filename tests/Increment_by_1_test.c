#include "fifo.h"

fifo_struct fifo;

int main()
{
    init_fifo_buf(&fifo);

    fifo.fifo_buf[0] = 'c';

    increment_write_pointer(&fifo);

    if (fifo.full_flag == BUFFER_FULL_FLAG_NOT_SET)
    {
        if (fifo.wp == (fifo.fifo_buf + 1))
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