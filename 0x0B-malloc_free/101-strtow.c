#include "main.h"
#include <stddef.h>
#include <stdlib.h>

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
				result[x] = malloc(sizeof(char *) * n + 1);
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
				result[x] = malloc(sizeof(char *) * n + 1);
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
