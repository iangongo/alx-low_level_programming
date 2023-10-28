#include "main.h"
/**
 * _strpbrk - function name Entry point
 * @s: function parameter one input
 * @accept:function parameter two  input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
	s++;
	}

return ('\0');
}
