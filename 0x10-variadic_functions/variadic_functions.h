#ifndef VARDIAC_H
#define VARDIAC_H

#include <stdarg.h>

/**
  * struct identfier - type of identfier
  * @f: char id
  * @func: function to execute
  */
typedef struct identfier
{
	char f;
	void (*func)(va_list args);
} id;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARDIAC_H */
