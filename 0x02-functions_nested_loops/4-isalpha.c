#include "main.h"

/**
 * _isalpha - functions that check for alphabetic
 * characters.
 * @c: holds the alphabet value
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
