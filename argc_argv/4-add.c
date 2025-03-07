#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *endptr;

	if (argc == 1)  /* If no numbers are passed, return 0 */
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		/* Use strtol to validate that each argument is a valid number */
		strtol(argv[i], &endptr, 10);

		/* If endptr does not point to the end of the string, invalid input */
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
