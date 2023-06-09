#include "main.h"

/**
  * *_strcpy - copies the string pointed to by src,
  * including the terminating null byte (\0), to the buffer pointed to by dest.
  * @dest: destnation string
  * @src: source string
  * Return: adress of dest variable
  */
char *_strcpy(char *dest, char *src)
{
	char *a = src;
	char *b = dest;
	int len = 0, i = 0;
	int destlen = 0;

	while (*a++ != '\0')
		len++;

	while (*b++ != '\0')
		destlen++;

	for (i = 0; i < len && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < destlen; i++)
		dest[i] = '\0';

	return (dest);
}
