#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a str with rot13
 * @s: pointer to str param
 * Return: pointer *s
 */

char *rot13(char *s)
{
	int h;
	int m;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (h = 0; s[h] != '\0'; h++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[h] == data1[m])
			{
				s[h] = datarot[m];
				break;
			}
		}
	}
	return (s);
}
