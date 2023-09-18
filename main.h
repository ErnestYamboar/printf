#ifndef _MAIN_H
#define _MAIN_H
#define BUFF 1024

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int my_putchar(char c);
int my_put(char *str);

#endif 
