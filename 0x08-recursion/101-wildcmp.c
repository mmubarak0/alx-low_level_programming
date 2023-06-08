#include "main.h"

/**
  * m - compares two string
  * @s: first string
  * @t: second string containing wild char
  * Return: 1 if there is a match 0 otherwise
  */
int m(char *s, char *t)
{
	return (*t - 42 ? *s ? (*t == 63) | (*s == *t) && m(s + 1, t + 1)
			: !*t : m(s, t + 1) || (*s && m(s + 1, t)));
}

/**
  * wildcmp - compares two strings and returns 1
  * if the strings can be considered identical, otherwise return 0
  * @s1: first string.
  * @s2: second string + can contain * wild character.
  * Return: 1 if true
  */
int wildcmp(char *s1, char *s2)
{
	return (m(s1, s2));
}
