#include "main.h"

/**
  * leet - encodes a string into 1337.
  * @string: string to be encoded
  * Return: encoded string
  */
char *leet(char *string)
{
	char *str = string;
	char lookup_tbl[] = "aAeEoOtTlL";
	char Replace_tbl[] = "4433007711";
	int i = 0;

	while (*str != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*str == lookup_tbl[i])
			{
				*str = Replace_tbl[i];
				break;
			}
		}
		str++;
	}
	return (string);
}
