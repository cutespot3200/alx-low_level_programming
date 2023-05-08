#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array value
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int u, b;

	for (u = 0; u < 8; u++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[u][b]);
		_putchar('\n');
	}
}
