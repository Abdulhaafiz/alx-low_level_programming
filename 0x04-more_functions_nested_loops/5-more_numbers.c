#include "main.h"

/**
 * more_numbers - A function to print more numbers
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int b;
	int a;

	for (a = 0 ; a <= 10 ; a++)
	{
	for (b = 0 ; b <= 14 ; b++)
		{
			_putchar('0' + b);
		}
			_putchar('\n');
	}
}
