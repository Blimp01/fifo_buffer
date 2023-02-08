#include <stdio.h>
#include "../fifo.h"

int main()
{
    uint8_t * a = NULL;

    if (init_fifo_buf(a) == FIFO_ERROR_PTR)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}