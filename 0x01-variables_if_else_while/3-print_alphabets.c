#include <stdio.h>
/**
 * main - Entry point
 *
 * print the alphabet in lower and upper
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ++ch)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
