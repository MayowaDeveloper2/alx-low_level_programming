#include "main.h"

/**
 * *_strncat - function concatentes two strings
 * except that it will use at most n bytes from
 * src and does not need to be null terminated
 * @dest: holding the destination integer value
 * @src: holding the integer value
 * @n: numbers of bytes
 * Return: return a pointer to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != 0; ++i)
		continue;
	for (j = 0; j < n; ++j)
	{
		dest[i] = src[j];
		++i;
	}

	return (dest);
}
