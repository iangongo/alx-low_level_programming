#include "main.h"

/**
  * _strchr - this is the main function name
  *
  * @s: Function parameter one
  *
  * @c: Function parameter two
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
