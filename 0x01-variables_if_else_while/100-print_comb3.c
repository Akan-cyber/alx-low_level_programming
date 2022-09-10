#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (a < i)
			{
				putchar(a);
				putchar(c);

				if (a != '8' || (a == '8' && c != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
