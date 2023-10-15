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
<<<<<<< HEAD
	int sum ;
=======
	int sum;
>>>>>>> 8fb81ca7a9fa0513682bb920365dba776eebc0c3
	va_list ap;
	char *p, *str, c;

	sum = 0;
	va_start(ap, format);

	for (p = (char *)format; *p; p++)
	{
		if (*p != '%')
		{
			sum += _putchar(*p);
			continue;
		}

		p++;
		if (*p == 'c')
		{
			c = va_arg(ap, int);
			sum += _putchar(c);
		}
		else if (*p == 's')
		{
			str = va_arg(ap, char *);
			if (!str)
				str = "(null)";
			sum += _puts(str);
		}
		else if (*p == '%')
		{
			sum += _putchar('%');
		}
	}

	_putchar(BUF_FLUSH);
	va_end(ap);
	return (sum);
}
