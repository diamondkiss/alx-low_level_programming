#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9
 * Description: Print the numbers excluding 2 and 4
 * Return: Numbers from 0 to 9
 *
 */

void print_most_numbers(void)
{
	int y =0;

	for (; y < 10; y++)
	{
	if (y == 2 || y ==4)
	{
	continue;
	{
	else 
	{
	_putchar(y + '0');
	}
	}
	_putchar('\n');
}
