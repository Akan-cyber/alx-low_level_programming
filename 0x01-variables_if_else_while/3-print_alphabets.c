#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char clara = 'a';
	char aClara = 'A';

	for (clara = 'a'; clara <= 'z'; clara++)
		putchar(clara);
	for (aClara = 'A'; aClara <= 'Z'; aClara++)
		putchar(aClara);

	putchar('\n');

	return (0);
}
