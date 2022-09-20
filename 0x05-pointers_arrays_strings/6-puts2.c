#include "main.h"

/**
 * puts2 - function prints every other character of string
 * starting with the first character
 * followed by a new line
 * @str: holds the string value
 * Return: Always (0) Success
 */
void puts2(char *str)
{
	int c;
	char ch;

	for (c = 0; str[c] != 0; ++c)
	{
		if (c % 2 == 0)
		{
			ch = str[c];
			_putchar(ch);
		}
	}

	_putchar('\n');
}
