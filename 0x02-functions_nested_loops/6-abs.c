#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - A function that prints absolute value of an integer
 *
 * @n: The integer to find its absolute value
 *
 * Return: Absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
