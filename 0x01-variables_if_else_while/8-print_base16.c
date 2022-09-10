#include <stdio.h>

/**
 * main - program prints all the numbers of base 16
 * in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (c = '0' ; c <= '9' ; c++)
		putchar(c);
	for (i = 97 ; i <= 102 ; i++)
		putchar((int)i);

	putchar('\n');

	return (0);
}
