#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplica dos argumentos
 * @argc: cantidad
 * @argv: array
 *
 * Return: 0, error 1
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int resultado;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	resultado = a * b;
	printf("%d\n", resultado);
	return (0);
}
