#include "function_pointers.h"

/**
 * print_name - writes a function that prints a name
 * @name: input name
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
}
