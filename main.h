#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct func_type - type structure
 * @t: pointer to the argument
 * @f: pointer-function associated with the argument
 */
typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;


int (*get_func(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int display_str(va_list args);
int display_char(va_list args);
int display_pct(va_list args);
int display_num(va_list args);
int display_binary(va_list args);

#endif
