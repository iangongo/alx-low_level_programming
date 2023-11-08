#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - function name print name using pointer to function
* @name: parameter string to add
* @f: parameter pointer to function
* Return: nothing
**/
	void print_name(char *name, void (*f)(char *))
{
		if (name == NULL || f == NULL)
			return;


		f(name);
}
