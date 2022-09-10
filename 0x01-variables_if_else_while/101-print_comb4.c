#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, c, k;

	for (a = '0'; a <= '9'; a++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (a < c && c < k)
				{
					putchar(a);
					putchar(c);
					putchar(k);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
