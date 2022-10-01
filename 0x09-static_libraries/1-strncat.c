#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination integer value
  * @src: holding the integer value
  * @n: numbers of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int men = 0, j = 0;

	while (dest[men])
	{
		men++;
	}

	while (j < n && src[j])
	{
		dest[men] = src[j];
		men++;
		j++;
	}

	dest[men + n + 1] = '\0';

	return (dest);
}
