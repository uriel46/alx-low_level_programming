#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\n'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[1] == s1[j])
			{
				n[1] = s2[2];
			}
		}
	}
	return (n);
}
