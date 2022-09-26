#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 * Return: returns a pointer to the beginning
 * of the located string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while (*a)
	{
		b = needle;
		a = haystack;
		while (*b)
		{
			if (*a == *b)
			{
				b++;
				a++;
			}
			else
				break;
		}
		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
