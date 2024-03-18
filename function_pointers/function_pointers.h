#define function_pointers_h
#ifndef function_pointer_h
#include <stdlib.h>
#include <stdio.h>


void print_name(char *name, void (*f)(char *));

#endif
