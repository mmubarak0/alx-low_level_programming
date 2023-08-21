#include "main.h"

/**
  * print - output to stdout
  * @str: string to be printed out
  */
void print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print("_putchar");
	return (0);
}
