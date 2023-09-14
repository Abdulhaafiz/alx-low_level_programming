#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - A function to print seconds
 *
 * Return: Always 0 (success)
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0 ; hour < 24 ; hour++)
	{
		for (minute = 0 ; minute < 60 ; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
