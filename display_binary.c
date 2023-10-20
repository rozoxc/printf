#include "main.h"

/**
 * display_binary - Prints the binary representation of an unsigned integer.
 * @args: va_list containing the unsigned integer to be printed in binary.
 * Return: Number of characters printed.
 */
int display_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	int significantBitFound = 0;
	int i;
	char bit;

	for (i = 31; i >= 0; i--)
	{
		bit = (n & (1 << i)) ? '1' : '0';
		if (bit == '1')
			significantBitFound = 1;

		if (significantBitFound)
		{
			_putchar(bit);
			count++;
		}
	}
	if (count == 0)
	{
		_putchar('0');
		count++;
	}
	return (count);
}
