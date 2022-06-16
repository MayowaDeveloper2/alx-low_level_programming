#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: char pointer string
 *
 * @src: char pointer string
 *
 * @n: number of elements to concatenate
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
