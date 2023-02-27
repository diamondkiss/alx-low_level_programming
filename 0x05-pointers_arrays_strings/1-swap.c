#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: The first value to be swapped
 * @b: The second value to be swapped
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
