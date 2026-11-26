#include "function_pointers.h"

/**
 * print_name - Prints a name using a callback function
 * @name: Name to print
 * @f: Pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
