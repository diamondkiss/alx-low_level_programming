#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (success)
 **/
int main(void)
{	int i;
	char var;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (var = 'a'; var <= 'f'; var++)
		putchar(var);
	putchar('\n');
	return (0);
}
