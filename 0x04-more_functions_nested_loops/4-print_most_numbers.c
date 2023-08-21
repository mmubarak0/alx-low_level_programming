#include "main.h"

/**
  * print_most_numbers - prints the numbers from 0 to 9
  */
void print_most_numbers(void)
{
	char a = '0' - 1;

	while (++a <= '9')
		if (a != '2' && a != '4')
			_putchar(a);
	_putchar('\n');
}
