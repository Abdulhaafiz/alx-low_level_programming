#include "main.h"

/**
 * print_most_numbers - A function to print most numbers
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	char p;

	for (p = 0 ; p <= 9 ; p++)
	{
		if (p != 2 && p != 4)
		{
			_putchar('0' + p);
		}
	}
	_putchar('\n');
}
