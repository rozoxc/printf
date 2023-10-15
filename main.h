#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

#define BUF_FLUSH -1
#define OUTPUT_BUF_SIZE 1024

typedef struct parameters
{
	unsigned int unsign	:1;
} params_t;



int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
#endif
