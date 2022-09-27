#include "main.h"
/**
 * print_diagsums - function that prints the sum of two diagonals
 * of a square matrix of integers
 * @a: 2d array
 * @size: size x size of the square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int dl = 0;
	int dr = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		dl += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		dr += a[i];
	}

	printf("%d, %d\n", dl, dr);
}
