#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';
	char clara = 'a';

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (clara = 'a'; clara <= 'f'; clara++)
		putchar(clara);

	putchar('\n');
	return (0);
}
