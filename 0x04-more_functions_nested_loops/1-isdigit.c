#include "main.h"

/**
  * _isdigit - check if a number is digit
  * @c: char, number to be checked
  * Return: 1 if c number 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
