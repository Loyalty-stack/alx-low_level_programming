#include "main.h"
/**
 * _memset - fills memory with a value
 * @s: memory area
 * @b: constant bytes
 * @n: memory filled
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
