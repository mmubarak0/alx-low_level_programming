#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * binary_to_uint - convert binary to unsigned int.
  * @b: binary string.
  * Return: unsigned int.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	unsigned int mul = 1;
	int len = 0;
	int i;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '0')
		{
			mul *= 2;
		}
		else if (b[i] == '1')
		{
			ans += mul;
			mul *= 2;
		}
		else
			return (0);
	}
	return (ans);
}
