#include "main.h"

/**
  * cap_string - capitalizes all words of a string.
  * @string: string to be capitalized
  * Return: string capitalized
  */
char *cap_string(char *string)
{
	char *lookup_tbl = " \t\n,;.!?\"(){}";
	char *str = string;
	int i = 0;
	int turn = 1;
	int c = 'a' - 'A';

	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') && turn)
		{
			*str = *str - c;
			turn = 0;
		}
		else
			turn = 0;
		i = 0;
		while (lookup_tbl[i] != '\0')
		{
			if (lookup_tbl[i] == *str)
				turn = 1;
			i++;
		}
		str++;
	}
	return (string);
}
