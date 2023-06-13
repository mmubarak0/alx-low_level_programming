#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * len_words - find words length
  * @str: string array
  * Return: counter;
  */
int len_words(char *str)
{
	int c = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (i > 0 && str[i - 1] == ' ')
				c++;
			else if (i == 0)
				c++;
		}
		i++;
	}
	return (c);
}

/**
  * strtow - splits a string into words.
  * @str: string to split
  * Return: NULL if str == NULL or str == ""
  */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, n = 0, c = 0, x = 0;
	char **result;

	if (str == NULL)
		return (NULL);
	c = len_words(str);
	if (c == 0)
		return (NULL);
	result = malloc(sizeof(char *) * c);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			n = 0;
			if (i > 0 && str[i - 1] == ' ')
			{
				j = i;
				while (str[j++] != ' ')
					n++;
				result[x] = malloc(sizeof(char *) * n);
				j = i;
				k = 0;
				while (str[j] != ' ')
					result[x][k++] = str[j++];
				result[x][k] = '\0';
				x++;
			}
			else if (i == 0)
			{
				j = i;
				while (str[j++] != ' ')
					n++;
				result[x] = malloc(sizeof(char *) * n);
				j = i;
				k = 0;
				while (str[j] != ' ')
					result[x][k++] = str[j++];
				result[x][k] = '\0';
				x++;
			}
		}
		i++;
	}
	result[x] = NULL;
	return (result);
}
