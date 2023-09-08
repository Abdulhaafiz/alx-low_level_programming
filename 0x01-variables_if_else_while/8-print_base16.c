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
	char c;

	for (b = 0 ; b < 10 ; b++)
	{
		putchar('0' + b);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
