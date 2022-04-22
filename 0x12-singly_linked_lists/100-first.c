#include <stdio.h>

void text(void) __attribute__ ((constructor));

/**
 * text - prints aspecific text
 *
 * Return: No return
 */
void text(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!\n");
}
