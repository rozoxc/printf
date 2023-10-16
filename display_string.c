#include "main.h"
/**
 * display_string - function that print a string
 * @*str: string
 * Return: int
 */

int display_string(char *str)
{
	int i = 0;
	if (str == NULL)
	{
		return (display_string("(null)"));
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
