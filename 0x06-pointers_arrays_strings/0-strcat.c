#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: char pointer variable
 *
 * @src: char pointer variabe
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)

		dest[a + b] = src[b];

	dest[a + b] = '\0';

	return (dest);
}
