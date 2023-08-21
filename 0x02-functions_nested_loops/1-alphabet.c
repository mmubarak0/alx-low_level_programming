#include "main.h"

/**
  * print_alphabet - print alphabet in lower case
  */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar('\n');
}
