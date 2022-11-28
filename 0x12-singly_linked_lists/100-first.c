#include <stdio.h>
/**
 * before - print string befor main runs
 */

void __attribute__((constructor)) before(void);

void before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

