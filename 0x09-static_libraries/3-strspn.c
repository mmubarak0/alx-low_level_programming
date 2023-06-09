#include "main.h"

/**
  * _strspn - gets the length of a prefix substring.
  * @s: string to check
  * @accept: prefix substring
  * Return: number of bytes in the initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	int check = 1, i, sum = 0;

	while (check)
	{
		check = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				check = 1;
				sum++;
			}
		}
		s++;
	}

	return (sum);
}
