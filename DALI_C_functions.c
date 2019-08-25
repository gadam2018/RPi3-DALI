// Shared .so library used by python RPi3_DALI_Controller_interface
//functions: C_DALI_write() & C_DALI_read()
#include <stdio.h>
#include <fcntl.h>
 
//gcc -fPIC -shared -o libdali.so DALI_C_functions.c

//int fd = open("/dev/RPi_DALI_drv", O_RDWR );
int fd;


int C_DALI_write(int DALI_command)
{
	char buffer[10];

	printf("DALI_command is %d\n",DALI_command);

	fd = open("/dev/RPi_DALI_drv", O_RDWR ); //printf( "Value of fd is: %d\n", fd );

	if( fd < 0 ){
    printf("Cannot open device \t"); printf(" fd = %d \n",fd); return -1;}

	sprintf(buffer,"%d",DALI_command); //printf("DALI_command as a string is %s",buffer);
	write( fd, buffer, 1 );
  
	return 0;
}


int C_DALI_read()
{
	char gpio_buffer[10];
	read( fd, gpio_buffer, 1);
    //printf("GPIO value is: %s \n", gpio_buffer ); //printf("GPIO int value is: %d \n", atoi(gpio_buffer) );
    //if( 0 != close(fd) ) {printf("Could not close device\n");  return -1;
	return atoi(gpio_buffer);
}
