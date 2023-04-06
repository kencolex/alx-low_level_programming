#include "main.h"

/**
 * _print_rev_recursion - will print the character in reverse
 * @s: The string will def be printed.
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
