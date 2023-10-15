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
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				printed_chars += _putchar(c);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "";
				while (*str)
				{
					_putchar(*str);
					printed_chars++;
					str++;
				}
			}
		else if (*format == '%')
			printed_chars += _putchar('%');
		else
			printed_chars += _putchar(*format);
		}
		else
			printed_chars += _putchar(*format);
		format++;
	}
	va_end(args);
	return (printed_chars);
}
