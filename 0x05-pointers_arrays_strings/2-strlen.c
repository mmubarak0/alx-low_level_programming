#include "main.h"

/**
  * _strlen - calculate the length of a string
  * @s: string variable
  * Return: length of the string s
  */
int _strlen(char *s)
{
	char *a = s;
	int i = 0;

	while (*a++ != '\0')
		i++;

	return (i);
}
