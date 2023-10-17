#include "main.h"
/**
 * display_string - function that print a string
 * @*str: string
 * Return: int
 */

int display_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
