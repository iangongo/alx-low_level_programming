#include <stdio.h>


/**
* main - function name prints the number of arguments passed into it.
* @argc: function parameter one argument count
* @argv: function parmeter two arguments
*
* Return: 0
*/
int main(int argc, char **argv)
{
(void)argv;


printf("%d\n", argc - 1);
return (0);
}
