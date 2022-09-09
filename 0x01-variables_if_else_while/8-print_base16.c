#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int clara = '0';
	char clara = 'a';

	for (clara = '0'; clara <= '9'; clara++)
		putchar(clara);
	for (clara = 'a'; clara <= 'f'; clara++)
		putchar(clara);

	putchar('\n');
	return (0);
