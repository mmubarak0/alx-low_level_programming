#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 time followd by new line
 */
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i++ < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a++);
		}
		_putchar('\n');
	}
}
