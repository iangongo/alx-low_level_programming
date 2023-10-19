#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - function name find the length of a string
 * @dest: function parameter pointer to the string
 * @src: function parameter pointer
 * @n: int
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

for ( ; i < n; i++)
	dest[i] = '\0';

return (dest);
}
