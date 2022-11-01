#include "main.h"

/**
 * _memcpy - this copies n bytes from src to dest
 * @dest: our destination
 * @src: this is the place we copy from
 * @n: how much we copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
