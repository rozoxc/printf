#include "main.h"

/**
 * display_num - prints decimal
 * @args: the argument decimal
 *
 * Return: counter
 */
int display_num(va_list args)
{
	int value, count = 0;
	unsigned int abs, temp;
	char buffer[12];

	value = va_arg(args, int);

	if (value < 0)
	{
		count += _putchar('-');
		abs = (value == INT_MIN) ? -(value + 1) + 1 : -value;
	}
	else
		abs = value;

	temp = abs;
	while (temp > 0)
	{
		buffer[count++] = (temp % 10) + '0';
		temp /= 10;
	}

	if (count == 0)
		buffer[count++] = '0';

	while (count > 0)
	{
		_putchar(buffer[--count]);
	}

	return  (count);
}
