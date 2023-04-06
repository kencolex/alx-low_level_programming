#include "main.h"

/**
 * int factorial - will perform a factorial function
 * @n: the integer to perform the factorial on.
 * Return: factorial of n as integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
