#include "main.h"
#include <string.h>

/**
  * chk_palindrome - check if string is palindrome
  * @str: string to check
  * @len: length of the string
  * @i: iterator
  * Return: 1 if palindrome 0 otherwise
  */
int chk_palindrome(char *str, int len, int i)
{
	if (str[i] != str[len - i])
		return (0);
	if (i > len)
		return (1);
	return (chk_palindrome(str, len, ++i));
}

/**
  * is_palindrome - check if a string is palindrome
  * @s: string to ckeck
  * Return: 1 if palindrome 0 otherwise
  */
int is_palindrome(char *s)
{
	int i = 0;
	int s_len = strlen(s);

	return (chk_palindrome(s, s_len - 1, i));
}
