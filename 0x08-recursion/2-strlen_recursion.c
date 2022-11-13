#include "main.h"


int _strlen_recursion(char *s)
{
	int count;

	if (*s)
	{
		count++;
		_strlen_recursion(s + 1);
	}
	return count;
}
