#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * numbers must be separated by comma
 * numbers hould be displayed in the same order
 * as they are stored in the array
 * @a: Array of integers to be printed
 * @n: Number of array of integers to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	putchar('\n');
}
