#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'e' || c == 'q') != 1)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
