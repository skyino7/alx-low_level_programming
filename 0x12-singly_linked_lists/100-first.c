#include "lists.h"

/**
 * __attribute__ - attributte
 * before_main - before_main
 * @constructor - constructor
 * Return: before_main
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
