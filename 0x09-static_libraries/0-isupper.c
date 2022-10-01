#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if a letter is in upper case
 * @c: holds the value
 * Return: 1 for upper or 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
