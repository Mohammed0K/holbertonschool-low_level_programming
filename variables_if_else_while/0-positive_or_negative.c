#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Assigns a random number to n each time it is executed.
 *        Prints whether the number is positive, negative, or zero.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
