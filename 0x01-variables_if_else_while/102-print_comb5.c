#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (success)
 **/

int main(void)
{
	int a, b;

	for (a = 00; a < 99; a++)
{
	for (b = a + 01; b < 100; b++)
	{
		if (a != b)
		{
			putchar(a + '0');
			putchar(' ');
			putchar(b + '0');
			if (a + b < 197)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
	putchar('\n');
	return (0);
}
