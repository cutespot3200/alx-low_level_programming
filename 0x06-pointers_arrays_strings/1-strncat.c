#include "main.h"
/**
 * _strncat - a function dat concat 2 strings
 *    using at most n bytes from src
 * @dest: input val
 * @src: input val
 * @n: input val
 *
 * Return:  char dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}

