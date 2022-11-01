#include "main.h"
#include <stddef>

/**
 * _strchr - this locates a character
 * @s: the string we look for
 * Return: a pointer to the char or NULL
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
