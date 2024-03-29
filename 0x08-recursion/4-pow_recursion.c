#include "main.h"

/**
 * _pow_recursion - carry out exponential function
 * @x: base integer
 * @y: power integer
 * Return: Result of the power of x to y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
