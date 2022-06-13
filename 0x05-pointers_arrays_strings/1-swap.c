#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: pointer integer parameter
 * @b: pointer integer parameter
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
