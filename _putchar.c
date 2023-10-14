#include <unistd.h>
void _putchar(int c)
{
	write(1, &c, 1);
}
