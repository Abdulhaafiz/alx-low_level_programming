#include  <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	int b;

	for (b = 0 ; b < 16 ; b++)
	{
		putchar('0' + b);
	}
	putchar('\n');
	return (0);
}
