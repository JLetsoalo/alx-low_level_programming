#include "function_pointers.h"

/**
 * print_name - printing name using f function
 * @name: name to print
 * @f: function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
	if (f != NULL)
		f(name);
}
