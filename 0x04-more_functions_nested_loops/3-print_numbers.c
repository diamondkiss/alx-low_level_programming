#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * Return: Numbers from 0 to 9
 *
 */

void print_numbers(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
	_putchar(y + '0');
	}
	_putchar('\n');
}
