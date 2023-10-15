#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	char *str, c;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			printed_chars++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					c = va_arg(args, int);
					_putchar(c);
					printed_chars++;
					break;
				}
				case 's':
				{
					str = va_arg(args, char *);
					if (!str)
						str = "(null)";
					while (*str)
					{
						_putchar(*str);
						printed_chars++;
						str++;

					}	
					break;
				}
				case '%':
					_putchar('%');
					printed_chars++;
					break;
			}	
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
