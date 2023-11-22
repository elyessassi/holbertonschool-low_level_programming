#ifndef VARFONC
#define VARFONC
#include <stdarg.h>

/**
 * struct type - data structure
 * @character: character
 * @fptr: function pointer that holds print functions
*/

typedef struct type
{
	char character;
	void (*fptr)(va_list);
} type_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
