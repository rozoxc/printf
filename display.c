#include "main.h"

/**
 * _putchar - dsplay the char
 * @c: the cha to display
 * Return: 1 success otherwise -1
 */

int _putchar(char c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _puts - display a string
 * @str: the wanted string
 * Return: the total of chars
 */
int _puts(char *str)
{
	int count = 0;
	char *s = str;

	while (*s)
	{
		if (_putchar(*s) == -1)
			return (-1);
		s++;
		count++;
	}
	return (count);
}
