#include "main.h"

/**
 * hlp - this helps me do stuff
 * @i: hlp int
 * @n: this is the integer to be tested
 * Return: value
 */

int hlp(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (hlp(i + 1, n));
	return (1);
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: integer to compare
 * Return: boolean
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (hlp(i, n));
}
