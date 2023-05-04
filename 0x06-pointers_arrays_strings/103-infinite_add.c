#include "main.h"
/**
 * rev_string - rev arr
 * @n: int parameter
 * Return: 0
 */
void rev_string(char *n)
{
	int q = 0;
	int s = 0;
	char temp;

	while (*(n + q) != '\0')
	{
		q++;
	}
	q--;

	for (s = 0; s < q; s++, q--)
	{
		temp = *(n + s);
		*(n + s) = *(n + q);
		*(n + q) = temp;
	}
}
/**
 * infinite_add - add 2 num
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to call function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, q = 0, s = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + q) != '\0')
		q++;
	while (*(n2 + s) != '\0')
		s++;
	q--;
	s--;
	if (s >= size_r || q >= size_r)
		return (0);
	while (s >= 0 || q >= 0 || overflow == 1)
	{
		if (q < 0)
			val1 = 0;
		else
			val1 = *(n1 + q) - '0';
		if (s < 0)
			val2 = 0;
		else
			val2 = *(n2 + s) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		s--;
		q--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
