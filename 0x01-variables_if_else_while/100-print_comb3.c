#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (success)
 **/

int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
{
	for (b = a + 1; b < 10; b++)
	{
		if (a != b)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a + b < 17)
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
