#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the string name
 * @f: function pointer to print
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
