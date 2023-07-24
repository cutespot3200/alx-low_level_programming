#include "main.h"
/**
 * *_strcat - a function that appends one string to another
 * @dest: input val
 * @src: input val
 * Return: should be void
 */

char *_strcat(char *dest, char *src)
{
	int f;
	int g;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[f] = src[g];
		f++;
		g++;
	}

	dest[f] = '\0';
	return (dest);
}
