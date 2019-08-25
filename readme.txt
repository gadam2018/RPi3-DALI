RPi3 - DALI
DALI Led communication and control based on Raspberry Pi3 and kernel modules
RPi_DALI_drv is a kernel module used for the communication and control of a DALI Led driver by any user application. Makefile is provided.
Example application in C (RPI_DALI_app.c) demonstrates the usage of this module.
An application interface in Python (RPi3_DALI_Controller_interface.py) facilitates a more friendly usage of this control operation, using a shared library (libdali.so) based on DALI_C_functions.c file.