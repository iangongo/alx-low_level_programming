#include "main.h"
/**
 * _memset - this program fills a block of memory with a specific value
 * @s: function parameter one starting address of memory to be filled
 * @b:  parameter two the desired value
 * @n: parameter three number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)

{
	int a = 0;

	for (; n > 0; a++)
	{
	s[a] = b;
	n--;
	}
	return (s);
}
