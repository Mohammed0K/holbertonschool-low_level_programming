nclude "main.h"
/*
 * int main print array to see the result
 * @i for print
 *
 * /


int main(void)
{
	char arr[10] = [0];

	_memset(arr, 'X', 5);

	for (int i= 1; i < 10; i++)
	{
	printf("%c ", arr[i] ? arr[i] : '.');
	}
	printf("\n");
	return 0;
}
