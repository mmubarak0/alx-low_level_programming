#include "main.h"

/**
  * puts2 - prints every other character of a string,
  * starting with the first character, followed by a new line.
  * @str: string to be printed
  */
void puts2(char *str)
{
	int i = 0, len = 0;
	char *a = str;

	while (*a++ != '\0')
		len++;

	while (i < len)
	{
		_putchar(*str);
		str += 2;
		i += 2;
	}
	_putchar('\n');
}
