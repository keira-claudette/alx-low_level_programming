#include <stdio.h>
void before_main(void) __attribute__((constructor));

/**
 * before_main - prints strings before main is executed
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
