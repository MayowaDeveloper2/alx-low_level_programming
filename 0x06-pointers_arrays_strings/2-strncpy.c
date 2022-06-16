#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: char pointer variable
 *
 * @src: char pointer variable
 *
 * @n: integer variable
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; src[a] != '\0'; a++)
	{
		if (a < n)
		{
			dest[a] = src[a];
		}
	}

	b = a;

	for (; n > b; b++)
		dest[b] = '\0';

	return (dest);
}
