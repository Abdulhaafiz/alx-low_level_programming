#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print alphnets except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
