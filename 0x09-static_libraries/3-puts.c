#include "main.h"

/**
 * _puts - function that prints a string
 * followed by a new line
 * @str: The string to print out to stdout
 * Return: Always (0) Success
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);

	_putchar('\n');
}
