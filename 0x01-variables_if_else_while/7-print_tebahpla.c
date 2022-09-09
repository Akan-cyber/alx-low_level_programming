#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char clara = 'z';

	for (clara = 'z'; clara >= 'a'; clara--)
		putchar(clara);

	putchar('\n');

	return (0);
}
