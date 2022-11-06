#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
int _putchar(char c);
void print_name(char *name, void (*f)(char *s));
void array_iterator(int *array, size_t, void (*action)(int));
int int_index(int *array, int size, int(*cmp)(int));
int sum_them_all(const unsigned int n, ...);
#endif
