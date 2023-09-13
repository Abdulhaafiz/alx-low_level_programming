/**
 * print_alphabet - Prints english alphabets in lowercase
 *
 * Description : A function to print english alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

void print_alphabet(void)
{
char a;
a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
}
