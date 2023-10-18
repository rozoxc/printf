#include "main.h"

/**
 * display_num - prints decimal
 * @args: the argument decimal
 *
 * Return: number of characters printed
 */
int display_num(va_list args)
{
    int value = va_arg(args, int);
    int count = 0;

    if (value < 0)
    {
        _putchar('-');
        count++;
        value = -value;
    }

    if (value == 0)
    {
        _putchar('0');
        count++;
    } 
    else
    {
        int num_digits = 0;
        int temp = value;
        while (temp > 0)
	{
            temp /= 10;
            num_digits++;
        }
        while (num_digits > 0)
	{
            int divisor = 1;
            for (int i = 1; i < num_digits; i++)
	    {
                divisor *= 10;
            }
            int digit;
	    digit = value / divisor;
            _putchar(digit + '0');
            count++;
            value -= digit * divisor;
            num_digits--;
       }
    }

    return count;
}

