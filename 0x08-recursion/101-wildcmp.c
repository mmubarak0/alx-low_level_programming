#include <main.h>

/**
  * wildcmp - compares two strings and returns 1
  * if the strings can be considered identical, otherwise return 0
  * @s1: first string.
  * @s2: second string + can contain * wild character.
  * Return: 1 if true
  */
int wildcmp(char *s1, char *s2)
{
	int i;
	int j;
	char *ss1 = s1;
	char *ss2 = s2;

	while (*ss1 != '\0')
	{
		if (*ss2 == '*')
		{
			while (*(ss2 + 1) == '*')
				ss2++;
			if (*(ss2 + 1) == '\0')
			{
				return (1);
			}
			else
			{
				while (*(ss2 + 1) != *ss1 && *ss1 != '\0')
					ss1++;
				ss2++;
				if (*ss1 != *ss2)
					return (0);
			}
		}
		else
		{
			if (*ss1 != *ss2)
			{
				return (0);
			}
			else
			{
				ss1++;
				ss2++;
			}
		}
	}
	return (1);
}
