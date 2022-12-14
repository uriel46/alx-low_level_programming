#include "main.h"

/**
 * factorial - this will return the factorial of agiven number.
 * @n: the number of which the factorial is be found.
 * Return: If n > 0 - the factorial of n. If n < 0 -1 to indicate an error
 */

int factorial(int n)
{

	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
