#include "main.h"

/**
 * _strlen - function that returns the length of string
 * @s: holds the string value
 * Return: Always (0) Success
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	++c;
		return(c);
}
