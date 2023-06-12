#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * _strlen - return string length
  * @str: string
  * Return: integer represent string length
  */
int _strlen(char *str)
{
	char *a;
	int len = 0;

	if (str == NULL)
		return (0);

	a = str;
	while (*a++ != '\0')
		len++;

	return (len);
}

/**
  * str_concat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * Return: string 1 + string 2
  */
char *str_concat(char *s1, char *s2)
{
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);
	int i = 0;
	char *final_str = (char *) malloc((sizeof(char) * (s1_len + s2_len)) + 1);
	char *ss1 = s1;
	char *ss2 = s2;

	if (final_str == NULL)
		return (NULL);

	if (s1_len > 0)
		while (*ss1 != '\0')
			final_str[i++] = *ss1++;
	if (s2_len > 0)
		while (*ss2 != '\0')
			final_str[i++] = *ss2++;
	final_str[i] = '\0';

	return (final_str);
}
