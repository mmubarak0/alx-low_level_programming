#include "main.h"

/**
  * string_toupper - convert lowecase letters to uppercase
  * @string: string to convert
  * Return: string with upper case letters
  */
char *string_toupper(char *string)
{
	char *str = string;
	int c = 'a' - 'A';

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - c;
		str++;
	}
	return (string);
}
