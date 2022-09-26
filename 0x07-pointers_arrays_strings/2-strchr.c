#include "main.h"

/**
 * _strchr - function that locates a character in string
 * @s: string
 * @c: character
 * Return: Returns a pointer to first occurance of char c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != 0; ++i)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
