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
	int printed_chars;
	char *str;

	printed_chars = 0;
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
			if (*format == 'c')
			{
				printed_chars += _putchar((char)va_arg(args, int));
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
			{
				_putchar('%');
				printed_chars++;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				printed_chars += 2;
			}
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
