#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a:swap integer a
 * @b:swap integer b
 */

void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;
}
