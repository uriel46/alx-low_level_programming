#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: input value
 *
 * Return: string
 */

char *cap_string(char *)
{
	int i;

	i = 0;
	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (i = 0; n[1] != '\0'; i++)
	{
		switch (n[1])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (n[i + 1] > 96 && n[i + 1] < 123)
				{
					n[i + 1] = n[i + 1] - 32;
				}
		}
	}
	return (n);
}
