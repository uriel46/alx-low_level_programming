#include "main.h"

/**
 * print_last_digit - prints a number's last digit
 * @n: the parameter to be used
 * Return: Last digit of number
 */

int print_last_digit(int n)
{
	if (n % 10 < 0)
	{
		_putchar(((n % 10) * -(1)) + 48);
		return ((n % 10) * -(1));
	}
	_putchar((n % 10) + 48);
	return (n % 10);
}
