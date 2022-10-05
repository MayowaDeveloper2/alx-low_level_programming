#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the string to be concatenated upon
 * @s2: the string yo be concatenated to s1
 * Return: NULL if concatenaton fails, otherwise
 * a pointer the newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i;
	unsigned int j;
	unsigned int length_s1;
	unsigned int length_s2;
	unsigned int length_c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length_s1 = 0; s1[length_s1] != '\0'; length_s1++)
		;

	for (length_s2 = 0; s2[length_s2] != '\0'; length_s2++)
		;

	length_c = length_s1 + length_s2;

	concat = malloc((length_c + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length_s1; ++i)
		concat[i] = s1[i];

	for (j = 0; j < length_s2; i++, j++)
		concat[i] = s2[j];

	return (concat);
}
