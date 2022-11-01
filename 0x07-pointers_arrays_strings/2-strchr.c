#include "main.h"
#include <stddef>

/**
 * _strchr - this locates a character
 * @s: the string we look for
 * @c: character to be located
 * Return: a pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
