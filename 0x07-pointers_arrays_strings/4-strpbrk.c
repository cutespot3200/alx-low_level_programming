#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input val
 * @accept: input val
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int w, q;

	for (w = 0; s[w] != '\0'; w++)
	{
		for (q = 0; accept[q] != '\0'; q++)
		{
			if (s[w] == accept[q])
				return (s + w);
		}
	}

	return (NULL);
}
