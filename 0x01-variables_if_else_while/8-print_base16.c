#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[] = {"0123456789abcdef"};
	int i;

	for (i = 0; i < 17; i++)
	{
		putchar(alp[i]);
	}

	putchar('\n');

	return (0);
}