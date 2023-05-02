#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to printout
 * return 0
 */

void print_rev(char *s)
{
	int longj = 0;
	int l;

	while (*s != '\0')
	{
		longj++;
		s++;
	}
	s--;
	for (l = longj; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
