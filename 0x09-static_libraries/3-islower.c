#include "main.h"

/**
  * _islower - check the case of a character
  * @c: ascii value of the character to test
  * Return: 1 if true 0 otherwise.
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
