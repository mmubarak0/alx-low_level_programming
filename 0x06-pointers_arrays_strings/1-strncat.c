#include "main.h"

/**
  * _strncat - concatenates two strings.
  * @dest: destnation string
  * @src: source string
  * @n: bytes from src
  * Return: destnation address
  */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;
	char *a = dest;

	while (*a++ != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
