#include "main.h"

/**
 * _pow_recursion - function that returns the value of x rasied to y
 * @x: the base integer
 * @y: the degree integer to raise x to
 * Return: The integer of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
