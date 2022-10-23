#include "main.h"

/**
 * print_square - this function prints a square
 * @size: takes in the size of the square
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar ('\n');
	}
}
