#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print numbers with a separator
 * @separator: separator
 * @n: number of args
 * @...: variable num of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i, j;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(num, int);
		printf("%d", j);
		if (separator == NULL)
			continue;
		if (i != (n-1))
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
