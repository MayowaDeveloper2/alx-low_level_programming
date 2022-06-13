#include "main.h"
/**
 * swap_int - a function that swap 
 *
 * the values of two integers
 *
 * @a: pointer integer paramter
 * @b: pointer integer paramter
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
