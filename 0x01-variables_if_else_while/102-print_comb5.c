#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (success)
 **/

int main(void)
{
	long a, b;

	for (a = 0; a < 99; a++)
{
	for (b = a + 1; b < 100; b++)
	{
		if (a != b)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) +  '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a + b < 198)
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
