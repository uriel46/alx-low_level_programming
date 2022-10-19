#include "main.h"

/**
 * print_sign - this will print the sign of a number
 * @n: this is the number with the sign to be printed
 * Return: 1 if zero is less than the number
 * 0 if number is zero
 * -1 if zero is greater tnan the number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

