#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
