#include "main.h"

/**
 * print_line - this function will draw a sttraight line in the terminal
 * @n: integer amount of n
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
		_putchar('_');
	_putchar('\n');
}
