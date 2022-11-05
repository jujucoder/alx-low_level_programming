#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument list
 * Return: 0(success) 1 (failure)
 */


int main(int argc, char **argv)
{
	int count;
	int number;
	int total;

	if (argc == 0)
	{
		printf("0\n");
	}

	else
	{
		for (count = 1; count < argc; count++)
		{
			number = atoi(argv[count]);
			if (number == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				total = total + number;
			}
		}
	}
	printf("%d\n", total);

	return (0);
}
