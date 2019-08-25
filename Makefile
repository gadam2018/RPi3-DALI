KERN_SRC:= /lib/modules/$(shell uname -r)/build
PWD   := $(shell pwd)
obj-m := RPi_DALI_drv.o
all:
	make -C $(KERN_SRC) M=$(PWD) modules
clean:
	make -C $(KERN_SRC) M=$(PWD) clean

