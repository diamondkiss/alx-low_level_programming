#include "main.h"

/**
 * print_most_numbers - Prints numbers since 0 up to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 to 9
 */

void print_most_numbers(void)

{
	int y = 0;

	for (; y <= 9; y++)
	{
		if (y == 2 || y == 4)
		{
			continue;
		}
		else
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n');
}
