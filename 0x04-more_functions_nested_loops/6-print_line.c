#include "main.h"

/**
 * print_line - draws a straight on the terminal (n) characters long.
 * @n: the number of underscore to print.
 * Return: no return
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
