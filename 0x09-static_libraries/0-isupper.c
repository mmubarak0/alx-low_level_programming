#include "main.h"

/**
  * _isupper - check upper case letters
  * @c: character to check
  * Return: 1 if c is upper case and 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
