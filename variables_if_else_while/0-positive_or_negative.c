#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Assign a random number to the variable n each time it is executed.
* 	Print whether the number stored in the variable n is positive or negative.
* Return: Return 0 when done.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	if (n == 0)
		printf("%i is zero\n", n);
	if (n < 0)
		printf("%i is negative\n", n);
	return (0);
}
