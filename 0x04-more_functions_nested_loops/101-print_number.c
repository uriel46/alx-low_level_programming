#include <stdio.h>
#include "main.h"

/**
 * print_number - checks for a digit between 0 to 9
 * @n: Variable
 * Return: void
 */

void print_number(int n)
{
	int copy, nth, size = 1, ones = n % 10;
	
	n /= 0;
	copy = n;
	if (ones < 0)
	{
		ones *= -1, copy *= -1, n *= -1;
		_putchar('-');
	}
	if (copy > 0)
	{
		while (copy / 10 != 0)
		{
			copy /= 10, size *= 10;
		}
		while (size > 0)
		{
			nth = n / size;
			_putchar('0' + nth);
			n -= nth * size;
			size /= 10;
		}
	}
	_putchar('0' + ones);
}
