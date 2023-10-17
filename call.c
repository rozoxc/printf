#include "main.h"

/**
 *display_char - prints character
 *@args: argument
 *
 *Return: character
 */

int display_char(va_list args)
{

	_putchar(va_arg(args, int));
	return (1);
}


/**
 *display_str - prints string
 *@args: arguments
 *Return: string
 */

int display_str(va_list args)
{

	int j;
	char *str = va_arg(args, char *);

	j = 0;
	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	return (j);
}

/**
 *display_pct - prints character "%"
 *@args : arguments
 *
 *Return: character "%"
 */
int display_pct(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

