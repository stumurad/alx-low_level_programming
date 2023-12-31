#include "function_pointers.h"
/**
 * print_name - yeb prototype
 * @name: char
 * @f: void pointer
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
