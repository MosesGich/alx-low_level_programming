#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
int _putchar(char);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int _pow(int, int);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
