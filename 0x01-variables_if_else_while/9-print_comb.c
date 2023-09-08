#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 0 ; d < 10 ; d++)
	{
		putchar(d);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
