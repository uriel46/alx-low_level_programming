#include "main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)
{
	int num, multpl, prodt;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multpl = 1; multpl <= 9; multpl++)
		{
			_putchar(',');
			_putchar(' ');

			prodt = num * multpl;

			if (prodt <= 9)
				_putchar(' ');
			else
				_putchar((prodt / 10) + '0');

			_putchar((prodt % 10) + '0');

		}
		_putchar('\n');
	}
}
