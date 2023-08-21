#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9
  */
void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
		_putchar(a++);
	_putchar('\n');
}
