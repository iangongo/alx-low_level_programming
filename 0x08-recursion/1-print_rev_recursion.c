#include "main.h"

/**
  * _print_rev_recursion - this is the main function name
  *
  * @s: this is the Function parameter one
  *
  * Return: Void
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
