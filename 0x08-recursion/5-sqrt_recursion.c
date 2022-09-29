#include "main.h"

/**
 * _get_sqrt - function returns natural square root of n to sqrt_recursion
 * @n: number to find the sqaure root of
 * @i: intger
 * Return: the integer natural square root
 */
int _get_sqrt(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (_get_sqrt(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function returns the natural sqrt of root of a number
 * @n: The number to find the square root of
 * Return: The integer natural square roo of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (_get_sqrt(n, 1));
}
