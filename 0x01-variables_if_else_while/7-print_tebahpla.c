#include <stdio.h>
/**
 * main - prints reverse lowercase alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
