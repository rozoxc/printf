#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int sum;
	va_list args;

	va_start(args, format);
	sum = 0;
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				sum += _putchar(va_arg(args, int));
			}
			else if (*format == 's')
			{
				sum += display_string(va_arg(args, char *));
			}
			else if (*format == '%')
			{
				_putchar('%');
				sum++;
			}
			else
			{
				_putchar('%');
				sum++;
				if (*format)
				{
					_putchar(*format);
					sum++;
				}
			}
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			sum++;
		}
	}
	va_end(args);
	return (sum);
}
