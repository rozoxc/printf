#include "main.h"
/**
 * _condition - function checke condition
 * @s: character
 */

void _condition(char s)
{
	_putchar(s);
}
/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int sum = 0;
	va_list args;

	va_start(args, format);
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			sum++;
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
			}
			else
			{
				_putchar('%');
				_condition(*format);
			}
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
	}
	}
	va_end(args);
	return (sum);
}
