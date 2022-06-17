#include "main.h"

/**
 * reverse_array - function that reverse contents of array of integers
 *
 * @a: array of pointer integers
 *
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < (n / 2); i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
