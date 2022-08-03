#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - it prints name
 * @name: name to be printed
 * @f: function ptr
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
  f(name);
}
