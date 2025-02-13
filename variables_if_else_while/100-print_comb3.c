#include <stdio.h>
/**
 * main - Print all prossible diffferent combination of two digits.
 * Return: Return void.
 */
int main(void)
{
	int num, num2;

	for (num = '0'; num <= '9'; num++)
	{
		for (num2 = num + 1; num2 <= '9'; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num == '8' && num2 == '9')
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
