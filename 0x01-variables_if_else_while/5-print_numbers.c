#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: A program to print numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	a = '0';

	for (a = 0 ; a < 10 ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
