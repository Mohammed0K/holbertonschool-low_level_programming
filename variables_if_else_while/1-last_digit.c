#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - The program will assign a random number to the variable n each time it is executed.
* 	Print the last digit of the number stored in the variable n.
* Return: Return 0 when done.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, n % 10);
	}
	else if	(n % 10 < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
