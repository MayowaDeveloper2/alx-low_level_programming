#include <unistd.h>

/**
 * main - This program that prints sentence with date,
 *
 * followed by a new line, to standard output
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
