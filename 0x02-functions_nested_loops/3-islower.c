#include "main.h"
/**
 * _islower - shows 1 if the input is a lowercas * e character, Another cases shows 0.
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >=97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
