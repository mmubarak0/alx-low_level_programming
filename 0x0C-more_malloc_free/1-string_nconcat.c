#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: number of bytes to copy from s2
  * Return: pointer to new memory contain s1 followed by s2
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, k;
	unsigned int lens1 = 0, lens2 = 0;
	char *string;
	char *ss1 = s1;
	char *ss2 = s2;

	if (ss1 != NULL)
		while (*ss1++ != '\0')
			lens1++;
	else
		lens1 = 0;

	if (ss2 != NULL)
		while (*ss2++ != '\0')
			lens2++;
	else
		lens2 = 0;

	if (lens2 > n)
		k = n;
	else
		k = lens2;
	string = malloc(sizeof(*s1) * (lens1 + k) + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		string[j++] = s1[i];
	for (i = 0; i < n && i < lens2; i++)
		string[j++] = s2[i];
	string[j] = '\0';

	return (string);

}
