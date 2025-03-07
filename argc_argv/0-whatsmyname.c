#include <stdio.h>
/**
 * main - imprime los valores de argv
 * @argc: cantidad
 * @argv: array
 *
 * Return: retorna 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
