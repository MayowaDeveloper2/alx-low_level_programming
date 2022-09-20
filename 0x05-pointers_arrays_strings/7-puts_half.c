#include "main.h"

/**
 * puts_half - function prints half of a string
 * followed by a new line
 * function should print the second half
 * if the numbers of characters is oodd
 * the function should print the last n character
 * of the string
 * @str: holds the string value
 * Return: Always (0) Success
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != 0; ++i)
		;

	n = (i + 1) / 2;

	for (; str[n] != 0; ++n)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}

