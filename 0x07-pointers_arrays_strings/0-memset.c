#include "main.h"

/**
 * _memset - this fills memory with a constant byte
 * @s: this is the memory area
 * @b: the byte
 * @n: the number of bytes to fill
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
