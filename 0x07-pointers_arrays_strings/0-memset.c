#include "main.h"

/**
  * _memset - this is the main function of the prototype
  *
  * @b: This id the value used to fill the memory
  *
  * @s: Function paramater one
  *
  * @n: Function parameter two
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
