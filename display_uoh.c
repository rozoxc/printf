#include "main.h"

/**
 * display_unsignd - Prints an unsigned number.
 * @args: A va_list containing the unsigned int to print.
 * Return: The number of characters printed.
 */
int display_unsignd(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int index, i, count = 0;
	char buffer[32];

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		index = 0;
		while (n > 0)
		{
			buffer[index++] = (n % 10) + '0';
			n /= 10;
		}
		for (i = index - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
			count++;
		}
	}
	return (count);
}


/**
 * display_octal - Prints an unsigned number in octal notation.
 * @args: A va_list containing the unsigned int to print.
 * Return: The number of characters printed.
 */
int display_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (n > 0)
		{
			_putchar((n % 8) + '0');
			n /= 8;
			count++;
		}
	}
	return (count);
}


/**
 * display - Helper function to
 * print a number in a specified base
 * @num: The number to be printed
 * @map: A string representing the
 * characters for the base (e.g., "0123456789abcdef")
 * @base: The base for the number (e.g., 16 for hexadecimal)
 * @uppercase: 1 to print uppercase characters, 0 for lowercase
 *
 * Return: Number of characters printed.
 */
int display(unsigned long int num,
		const char *map, int base, int uppercase)
{
	char buffer[32];
	int i, j, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	i = 0;
	while (num > 0)
	{
		buffer[i++] = map[num % base];
		num /= base;
	}
	if (uppercase)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (strcmp(map, "0123456789abcdef") == 0)
			{
				_putchar(buffer[j] - 32);
			}
			else
			{
				_putchar(buffer[j]);
			}
			count++;
		}
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			_putchar(buffer[j]);
			count++;
		}
	}

	return (count);
}


/**
 * display_hexadl - prints lower case numbers
 * @args: argument
 * Return: results
 */
int display_hexadl(va_list args)
{
	unsigned long int num;

	num = va_arg(args, unsigned long int);
	return (display(num, "0123456789abcdef", 16, 0));
}

/**
 * display_hexau - prints upper case numbers
 * @args: argument
 * Return: Resulats
 */

int display_hexau(va_list args)
{
	unsigned long int num;

	num = va_arg(args, unsigned long int);
	return (display(num, "0123456789ABCDEF", 16, 1));
}

