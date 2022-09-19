#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line
 * @s: holds the value
 * Return: Always (0) Success
 */

void print_rev(char *s)
{
	int c;
	char ch;

	for (c = 0; s[c] != 0; ++c)
		continue;
	for (c = c - 1; c >= 0; --c)
	{
		ch = s[c];
		_putchar(ch);
	}
	_putchar('\n');
}
