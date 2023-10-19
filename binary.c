#include "main.h"

/**
 * display_binary - Print a number in base 2
 * @args: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int display_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int size = 0;
	unsigned int bits[sizeof(unsigned int) * 8];
	unsigned int i;

	if (num == 0)
	{
		_putchar('0');
		size++;
	}
	else
	{
		for (i = 0; i < sizeof(unsigned int) * 8; i++)
		{
			bits[i] = (num >> i) & 1;
		}
		i = sizeof(unsigned int) * 8 - 1;
		while (i > 0 && bits[i] == 0)
			i--;
		for (; i > 0; i--)
		{
			_putchar(bits[i] + '0');
			size++;
		}
		_putchar(bits[i] + '0');
	}
	return (size);
}
