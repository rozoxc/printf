#include "main.h"

/**
 * get_func - check for valid specifier
 * @format: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format))(va_list)
{
	switch (*format)
	{
		case 'c': return display_char;
		case 's': return display_str;
		case '%': return display_pct;
		default: return NULL;
	}
}

