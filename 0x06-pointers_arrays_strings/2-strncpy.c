#include "main.h"
/**
 * _strncpy - a function that copies one string into another
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;
	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}

	return (dest);
}
