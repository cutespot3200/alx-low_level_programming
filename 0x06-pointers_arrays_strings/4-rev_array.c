#include "main.h"

/**
 * reverse_array - a function whic  rev array of int
 * @a: arrays
 * @n: no of elements of the  array
 *
 * Return: void type
 */

void reverse_array(int *a, int n)
{
	int e;
	int z;

	for (e = 0; e < n--; e++)
	{
		z = a[e];
		a[e] = a[n];
		a[n] = z;
	}
}
