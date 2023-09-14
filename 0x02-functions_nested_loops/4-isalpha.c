#include "main.h"

/**
 * _isalpha - A function that returns 1 if c is an alphabet else 0
 *
 * @c: The character to check
 *
 * Return: 1 if true else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
