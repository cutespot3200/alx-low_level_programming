#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from,e
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
