#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format:  is a character string.
 * Return: return the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	char buffer[1024], *str, c;
	int i, j, chars_printed;

	va_start(args, format);
	chars_printed = 0;
	i = 0;
	j = 0;
	while (*format != '\0')
	{
		if (*format != '%')
		{
			buffer[i++] = *format;
			chars_printed++;
		}
		else
		{
			switch (*++format)
			{
				case 'c':
					{
						c = (char)va_arg(args, int);
						buffer[i++] = c;
						chars_printed++;
					}
					break;
				case 's':
					{
						str = va_arg(args, char *);
				while (*str != '\0')
				{
							buffer[i++] = *str;
							str++;
							chars_printed++
						}
					}
					break;
				case '%':
					buffer[i++] = '%';
					chars_printed++;
					break;
				default:
					buffer[i++] = '%';
					buffer[i++] = *format;
					chars_printed += 2;
					break;
			}
		}
		format++;
	}
	while (j < i)
	{
		_putchar(buffer[j]);
		j++;
	}
	va_end(args);
	return (chars_printed);
}
