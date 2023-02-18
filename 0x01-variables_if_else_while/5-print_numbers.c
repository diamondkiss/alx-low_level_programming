#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway 0 (success)
 *
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar('0' + b);
	}
	putchar('\n');
	return (0);
}

