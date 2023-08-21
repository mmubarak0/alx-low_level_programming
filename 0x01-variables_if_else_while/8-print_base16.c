#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = '0';

	while (a <= '9')
		putchar(a++);
	a = 'a';
	while (a <= 'f')
		putchar(a++);
	putchar('\n');
	return (0);
}
