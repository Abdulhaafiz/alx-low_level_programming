#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - A function that prints the last digit
 *
 * @n: The character
 *
 * Return: The last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	printf("%d\n", last_digit);
	return (last_digit);
}
