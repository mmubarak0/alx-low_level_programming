#include "main.h"
#include <string.h>

/**
  * rev_string - reverse a string
  * @s: string to be reversed
  */
void rev_string(char *s)
{
	char *a = s;
	char rev[1000];
	int len = 0, i, j = 0;

	while (*a++ != '\0')
		len++;

	for (i = len; i > 0; i--)
	{
		rev[j++]  = s[i - 1];
	}
	rev[j] = '\0';
	strcpy(s, rev);
}
