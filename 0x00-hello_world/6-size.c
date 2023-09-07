#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : 'This program prints sizes of variables'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
puts("Size of a char : %lu byte(s)", sizeof(char));
puts("Size of an int : %lu byte(s)", sizeof(int));
puts("Size of a long int : %lu byte(2)", sizeof(long int));
puts("Size of a long long int : %lu byte(s)", sizeof(long long int));
puts("Size of a float : %lu byte(s)", sizeof(float));
return (0);
}
