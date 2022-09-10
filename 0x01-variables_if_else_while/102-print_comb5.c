#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int c;
	int j;

	for (c = 0; c <= 99; c++)
	{
		for (j = c + 1; j <= 99; j++)
		{
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (!(c == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
