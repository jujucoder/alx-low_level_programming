#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument list
 * Return: 0(success) 1 (failure)
 */


int main(int argc, char **argv)
{
	int count;
	int total;
	int item;

	if (argc < 1)
	{
		printf("0\n");
	}

	else
	{
		for (count = 1; count < argc; count++)
		{
			for (item = 0; argv[count][item]; item++)
			{
				if (!isdigit(argv[count][item]))
				{
					printf("Error\n");
					return (1);
				}
			}
			total += atoi(argv[count]);
		}
	}
	printf("%d\n", total);
	return (0);
}
