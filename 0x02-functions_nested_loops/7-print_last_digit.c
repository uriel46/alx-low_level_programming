#include "main.h"

/**
 * print_last_digit - this prints the last digit
 * @u: the number
 * Return: value of the last digit
 */
int print_last_digit(int u)
{
	int ld = u % 10;

	if (ld < 0)
		ld *= -1;


	_purchar(ld + '0');
	return (0);
}
