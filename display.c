#include "main.h"

/**
 * _putchar - dsplay the char
 * @c: the cha to display
 * Return: 1 success otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
