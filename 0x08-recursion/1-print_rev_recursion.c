#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse
 * @s: the string to rverse
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
