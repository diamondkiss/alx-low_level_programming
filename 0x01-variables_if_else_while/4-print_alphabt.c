#include <stdio.h>

/**
 * main -main function
 *
 * Return: always 0
 */

int main(void)
{
	char a;

	/* print lowercase letters */
	for (a = 'a'; a <= 'Z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}

