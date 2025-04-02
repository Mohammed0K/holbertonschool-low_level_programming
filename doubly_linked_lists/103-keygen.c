#include "lists.h"

/**
 * main - Generates a key for crackme5 based on the username
 * @argc: Number of arguments passed to the program
 * @argv: Array of argument strings
 *
 * Description: The key is computed by summing the ASCII values of the
 * characters in the username and multiplying the sum by the ASCII value
 * of the first character of the username.
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	unsigned int sum = 0;
	unsigned int key;
	int i;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
		sum += (unsigned int)argv[1][i];
	key = sum * ((unsigned int)argv[1][0]);
	printf("%u", key);
	return (0);
}
