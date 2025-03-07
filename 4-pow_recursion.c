#include "main.h"
/**
 * _pow_recursion - result pow
 * @x: num
 * @y: pow
 * Return: num of pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
