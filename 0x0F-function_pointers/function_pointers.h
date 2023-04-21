#ifndef FUNCTION_POINTERS_H
#define FUNVTION_POINTERS_H

#include <stdlib.h>
#include <stddef.h>

int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif