#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: holds the value
 * Return: Always (0) Success
 */
void rev_string(char *s)
{
	int c, j;
	char ch;

	j = 0;

	for (c = 0; s[c] != 0; ++c)
		;

	for (c = c - 1; j < c; --c)
	{
		ch = s[c];
		s[c] = s[j];
		s[j] = ch;
		++j;
	}
}
