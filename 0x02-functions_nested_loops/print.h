#define _putchar putchar
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	int g;
	char a;
	a = 'a';
	for (g = 1 ; g <= 10 ; g++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			putchar(a);
		}
			putchar('\n');
	}
}
