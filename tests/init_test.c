#include "fifo.h"

fifo_struct fifo;

int main()
{
    init_fifo_buf(&fifo);

    if (fifo.rp == fifo.fifo_buf && fifo.wp == fifo.fifo_buf)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}