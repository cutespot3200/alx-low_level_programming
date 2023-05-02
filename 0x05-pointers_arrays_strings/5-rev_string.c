#include "main.h"

/**
 *  rev_string -  a function that reverses a string
 *  @s: string datatype
 *  Return: string in a reversal order
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int count = 0;
	int d;

	while (s[count] != '\0')
	count++;
	for (d = 0; d < count; d++)
	{
		count--;
		reverse = s[d];
		s[d] = s[count];
		s[count] = reverse;
	}
}
