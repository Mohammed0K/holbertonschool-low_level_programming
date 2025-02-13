#include <stdio.h>
/**
 * main - Print the size of various types.
 *
 * Return: Return 0 when done.
 */

int main(void)
{
	int intType;
	float floatType;
	char charType;
	long longType;
	long long intTypeLong;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(intTypeLong));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
