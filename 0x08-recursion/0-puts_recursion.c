#include "main.h"

/**
  * _puts_recursion - this is the main function name
  *
  * @s: function parameter one
  *
  * Return: Always 0.
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
