#ifndef function_pointer.h
#define function_pointers.h

#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
