#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * _strdup - create copy of the string
  * @str: string to copy
  * Return: returns a pointer to a newly allocated space in memory
  */
char *_strdup(char *str)
{
	char *a = str;
	char *dupstr;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (*a++ != '\0')
		len++;

	dupstr = (char *) malloc((sizeof(char) * len) + 1);
	if (dupstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dupstr[i] = str[i];
	dupstr[i] = '\0';
	return (dupstr);
}
