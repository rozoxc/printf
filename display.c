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
		case 'd': return display_num;
		case 'i': return display_num;
		case 'b': return display_binary;
		case 'u': return display_unsignd;
		case 'o': return display_octal;
		case 'x': return display_hexadl;
		case 'X': return display_hexau;
		default:
		return (NULL);
	}
}

