#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @src: hold string value
 * @dest: string value to return
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != 0; ++i)
		;
	for (j = 0; src[j] != 0; ++j)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
