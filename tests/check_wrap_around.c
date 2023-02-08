#include <stdio.h>
#include "../fifo.h"


fifo_struct fifo;

int main()
{
    init_fifo_buf(&fifo);

    fifo.wp = fifo.fifo_buf + FIFO_BUFFER_SIZE;
    fifo.rp = fifo.fifo_buf + 2U; //keep rp out of the way


    printf("set pointer to last position then increment to check for wrap around\n");
    printf("%p\n",fifo.wp);

    increment_write_pointer(&fifo);

    printf("%p\n",fifo.wp);
    printf("%p\n",fifo.fifo_buf);

    if (fifo.full_flag == false)
    {
        if (fifo.wp == fifo.fifo_buf)
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