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
	char c, *str;

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
				c = va_arg(args, int);
				sum += _putchar(c);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				sum += display_string(str);
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
