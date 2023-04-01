#include "main.h"

/**
 * reverse_array - function to reverse an array
 *
 * @a: array
 * @n: integer variable
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
