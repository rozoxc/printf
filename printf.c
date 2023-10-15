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
	int printed_chars, i, j;
	char *str, c;

	printed_chars = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_chars++;
		}
		else
		{
			i++;
			switch (format[i])
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
					if (str == NULL)
						str = "(null)";
					 j = 0;
					while (str[j] != '\0')
					{
						_putchar(str[j]);
						printed_chars++;
						j++;
					}
					break;
				}
				case '%':
					_putchar('%');
					printed_chars++;
					break;
			}
		}
		i++;
	}
	va_end(args);
	return (printed_chars);
}
