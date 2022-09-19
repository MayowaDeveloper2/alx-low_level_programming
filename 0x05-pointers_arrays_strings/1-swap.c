#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: takes value of integer
 * @b: takes other value of integer
 * Return: Always (0) Success
 */
void swap_int(int *a, int *b)
{
	int cnn = *a;
	*a = *b;
	*b = cnn;
}
