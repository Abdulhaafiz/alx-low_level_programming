#include "main.h"

/**
 * more_numbers - A function to print more numbers
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int c;
	int a;

	for (a = 0 ; a <= 10 ; a++)
	{
		for (c = 0 ; c <= 14 ; c++)
		{
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
