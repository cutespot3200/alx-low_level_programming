#include "main.h"
#include <stdio.h>
/**
 * *_strchr - Entry point
 * @s: input val
 * @c: input val
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int d = 0;

	for (d = 0; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (s + d);
	}
	return (NULL);
}
