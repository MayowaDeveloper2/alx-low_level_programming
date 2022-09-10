#include <stdio.h>

/**
 * main - program that prints all digit of 10
 * starting from 0 and followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		printf("%d", i);
	putchar('\n');

	return (0);
}
