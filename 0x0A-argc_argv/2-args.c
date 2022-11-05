#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int count;

	if (argc == 0)
		printf("%s\n", argv[0]);
	else
	{
		for (count = 0 ; count < argc ; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
