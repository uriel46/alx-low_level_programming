#include "main.h"

/**
 * _strpbrk - locate the first occurence in s if any bytes in accept
 * @s: the string we look for occurences in
 * @accept: the print we compare againt
 *
 * Return: a pointer to byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
