#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input val
 * @needle: input val
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *u = needle;

		while (*t == *u && *u != '\0')
		{
			t++;
			u++;
		}

		if (*u == '\0')
			return (haystack);
	}

	return (NULL);
}
