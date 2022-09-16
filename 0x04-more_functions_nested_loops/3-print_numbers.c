#include "main.h"

/**
 * print_numbers - function that prints from 0 t0 9
 * followed by a new line
 * @c: holds the integer value
 * Return: Always (0) Success
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
