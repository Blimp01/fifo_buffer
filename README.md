# fifo_buffer

This is a small simple implentation of a fifo buffer structure in C. A good example use case would be a reception of a byte via interupt from a communcation module. i.e UART/SPI/I2C. you will have to implented how and when you parse the data out coming out the buffer.

Change the size by changing the defination FIFO_BUFFER_SIZE.

(Not RTOS safe due to no crictal sections)

How To Use:

Simply take fifo.c and fifo.h and include them in your project. 


