#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower
 * followed by a new line
 * Return: Always (0) Success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}

	_putchar('\n');
}

