#include "main.h"

/**
 * display_binary - Print a number in base 2
 * @args: Number to print in base 2
 *
 * Return: Length of the numbers in binary
**/
int display_binary(va_list args)
{
	int decimal_number = va_arg(args, int);
	int binary[32];
	int i = 0;
	int printed_chars = 0;
	int j;

	if (decimal_number < 0)
	{
		decimal_number = -decimal_number;
		_putchar('-');
		printed_chars++;
	}

	if (decimal_number == 0)
	{
		_putchar('0');
		printed_chars++;
	}
	else
	{
		while (decimal_number > 0)
		{
			binary[i] = decimal_number % 2;
			decimal_number = decimal_number / 2;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar('0' + binary[j]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
