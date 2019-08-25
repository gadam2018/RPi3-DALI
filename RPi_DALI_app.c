#include <stdio.h>
#include <fcntl.h>
 
#define DALI_drv "/dev/RPi_DALI_drv"	//kernel-module C name (in devices dir)
 
int main(void)
{
  int fd;
  char gpio_buffer[10];
  char choice[10];
  int repeat = 0;

fd = open(DALI_drv, O_RDWR );

  printf( "Value of fd is: %d", fd );

  if( fd < 0 )
  {
    printf("Cannot open device \t");
    printf(" fd = %d \n",fd);
    return 0;
  }

 while (repeat!=199)
 {
  printf("\nEnter address&data in xxxxxx decimal format: \t");//e.g. 255254 (means FE)
  scanf( "%s", choice );
  printf("Your address&data is: %s \n", choice );
  write( fd, choice, 1 );
  //read( fd, gpio_buffer, 1);
 // printf("GPIO value is: %s \n", gpio_buffer );
  
  printf("\nContinue?: ");
  scanf("%d", &repeat);
  }
  
  if( 0 != close(fd) )
  {
    printf("Could not close device\n");
  }

  return 0;
}
