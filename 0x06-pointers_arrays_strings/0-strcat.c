#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src);
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\n')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	return (dest);
}
