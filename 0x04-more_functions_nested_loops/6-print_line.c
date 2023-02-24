#include "main.h"

/**
 * print_line - DRAW a straight line according to parameter
 * @x: The number of lines to draw
 * Return: empty
 */

void print_line(int x)

{
	int a;

	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a > x; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
