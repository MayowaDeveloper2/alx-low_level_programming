#include "main.h"

/**
 * _isdigit - function that checks for digit 0 to 9
 * @c: holds the value to be checked
 * Return: 1 if it is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
