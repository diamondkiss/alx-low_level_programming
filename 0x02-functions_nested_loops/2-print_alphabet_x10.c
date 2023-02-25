#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 times
 * Return: void
 */

void print_alphabet_x10(void)

{
	char x;
	int i = 0;

	while (i <= 9)
	{
		for (x = '0'; x <= 'x'; x++)
		{
	_putchar(x);
		}
	_putchar('\n');
	i++;
	}
}
