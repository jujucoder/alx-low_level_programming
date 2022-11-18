#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings with separator
 * @separator: seperator
 * @n: number of args
 * @...: variable args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	char *j;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(num, char *);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (separator == NULL)
			continue;
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
