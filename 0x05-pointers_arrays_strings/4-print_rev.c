#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: char pointer variable
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;
	while (s[b])
	{
		_putchar(s[b]);
		b--;
	}
	_putchar(10);
}
