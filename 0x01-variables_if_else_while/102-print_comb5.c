#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				if (k != i)
				{
					l = 48;
				}
				else
				{
					l = j + 1;
				}
				for (; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
					{
					}
					else
					{
						putchar(',');
						putchar(32);
					}
				}
			}
		}
	}

	putchar ('\n');

	return (0);
}
