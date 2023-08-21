#include "main.h"
#include <stddef.h>
#include <string.h>

/**
  * _strstr - locates a substring.
  * @haystack: string to search
  * @needle: buffer to match
  * Return: pointer to the beginning of the located substring,
  * or NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int chk = 0;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	while (*haystack != '\0')
	{
		/*
		*if (needle[0] == *haystack)
		*{
		*/
		chk = 1;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] != *(haystack + i) || *(haystack + i) == '\0')
			{
				chk = 0;
				break;
			}
		}
		if (chk)
			break;
		/*}*/
		haystack++;
	}

	if (chk)
		return (haystack);
	return (NULL);
}
