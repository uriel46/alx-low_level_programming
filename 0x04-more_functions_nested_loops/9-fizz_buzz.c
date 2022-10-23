#include <stdio.h>

#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * fizz is printed instead of multiples of 3
 * buzz for multiples of 5 and fizzbuzz for
 * multiples of 3 and 5
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
