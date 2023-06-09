#include "main.h"
#include <stddef.h>
/**
 * *_memset - Fills 1st  n bytes of the memory area
 * pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
