#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format:  is a character string.
 * Return: return the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed;
	char *str;

	chars_printed = 0;
	va_start(args, format);
	if (format == NULL)
		format = "";
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				chars_printed += (char)va_arg(args, int);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				while (*str != '\0')
				{
					chars_printed += _putchar(*str);
					str++;
				}
			}
			else if (*format == '%')
			{
				chars_printed += _putchar('%');
			}
			format++;
		}
		else
		{
			chars_printed += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (chars_printed);
}
