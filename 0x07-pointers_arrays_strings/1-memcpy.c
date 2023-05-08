#include "main.h"

/**
 * *_memcpy - Copies @n bytes from the memory area pointed to @src
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++);
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
