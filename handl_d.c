#include "main.h"

/**
 * display_num - prints num
 * @args: the argument decimal
 *
 * Return: counter
 */
int display_num(va_list args)
{
	int value, count = 0;
	unsigned int zef, temp, divisor = 1;

	value = va_arg(args, int);
	if (value < 0)
	{
		count += _putchar('-');
		zef = (value == INT_MIN) ? -(value + 1) + 1 : -value;
	}
	else
		zef = value;

	temp = zef;
	while (temp > 9)
	{
		temp /= 10;
		divisor *= 10;
	}

	temp = zef;
	while (divisor > 0)
	{
		count += _putchar((temp / divisor) + '0');
		temp %= divisor;
		divisor /= 10;
	}
	return (count);
}
