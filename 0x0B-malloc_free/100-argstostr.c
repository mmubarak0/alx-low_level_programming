#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


/**
  * argstostr - concatenates all the arguments of the program
  * @ac: number of arguments
  * @av: argument array
  * Return: pointer to a new string or _NULL_
  */
char *argstostr(int ac, char **av)
{
	int k = 0, i, j, n = 0;
	char *cop;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		cop = av[i];
		j = 0;
		while (cop[j++] != '\0')
			k++;
	}
	result = malloc(sizeof(char) * k + ac + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		cop = av[i];
		j = 0;
		while (cop[j] != '\0')
		{
			result[n++] = cop[j++];
		}
		result[n++] = '\n';
	}
	result[n] = '\0';
	return (result);
}
