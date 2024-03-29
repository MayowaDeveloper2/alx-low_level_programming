#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array of integers
 * @array: The array of integers
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: if no element matches or size <= 0 - -1
 * otherwise, the index of the first element for which the cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (!array || !size || !cmp)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
