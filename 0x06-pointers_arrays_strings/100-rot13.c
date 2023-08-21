#include "main.h"

/**
  * rot13 - encodes a string using rot13.
  * @string: string to be encoded
  * Return: string encoded with rot13
  */
char *rot13(char *string)
{
	int i, j;
	char *str = string;
	char *lookup_tbl = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *Replace_tbl = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

/*
 *	char lookup_tbl['a' - 'A'];
 *	char Replace_tbl['a' - 'A'];
 *
 *	j = 0;
 *	for (i = 'a'; i <= 'z'; i++)
 *		lookup_tbl[j++] = i;
 *	for (i = 'A'; i <= 'Z'; i++)
 *		lookup_tbl[j++] = i;
 *	j = 0;
 *	for (i = 'a' + 13; i <= 'z'; i++)
 *		Replace_tbl[j++] = i;
 *	for (i = 'a'; i < 'a' + 13; i++)
 *		Replace_tbl[j++] = i;
 *	for (i = 'A' + 13; i <= 'Z'; i++)
 *		Replace_tbl[j++] = i;
 *	for (i = 'A'; i < 'A' + 13; i++)
 *		Replace_tbl[j++] = i;
 */
	for (i = 0; *str != '\0'; i++)
	{
		for (j = 0; lookup_tbl[j] != '\0'; j++)
		{
			if (*str == lookup_tbl[j])
			{
				*str = Replace_tbl[j];
				break;
			}
		}
		str++;
	}
	return (string);
}
