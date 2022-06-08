#include "main.h"
/**
 * main - print_alphabet in lowercase
 *
 * print_alphabet - print alphabet in lowercases
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
