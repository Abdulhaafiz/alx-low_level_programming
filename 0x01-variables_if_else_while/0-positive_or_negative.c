#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This is a program that assign a random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("n is positive\n");
	} else if (n == 0)
	{
		printf("n in zero\n");
	} else if (n < 0)
	{
		printf("n is negative\n");
		}
return (0);
}