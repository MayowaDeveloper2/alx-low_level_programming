#include <stdio.h>
/**
 * main - print the lowercase alphabet in rverse,
 *
 * followed by a new line, using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
