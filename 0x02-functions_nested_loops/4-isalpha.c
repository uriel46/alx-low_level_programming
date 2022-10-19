#include "main.h"

/**
 * _isalpha - this checks for alphabets
 * @c: this is the character to be checked
 * Return: 1 if character is a letter, otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
