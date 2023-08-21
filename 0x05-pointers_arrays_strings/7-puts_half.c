#include "main.h"

/**
  * puts_half - prints half of a string, followed by a new line.
  * @str: string to be printed
  */
void puts_half(char *str)
{
	char *a = str;
	int len = 0, i = 0;
	int n;

	while (*a++ != '\0')
		len++;

	if (len % 2)
		n = (len - 1) / 2;
	else
		n = len / 2;

	for (i = len - n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
