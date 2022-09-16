#include <stdio.h>

/**
* main - prints the numbers from 1 to 100
* 3 multiplea print Fizz instead of number
* 5 multiples print Buzz instead of the number
* 3 & 5 multiples print FizzBuzz instead of number
* Return: Always (0) Success
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	return (0);
}
