#include "lists.h"

/**
 * print_before_main - Prints a message before the main function executes.
 *
 * Description: This function is marked with the constructor attribute,
 * so it runs automatically before main() is called.
 */
void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
