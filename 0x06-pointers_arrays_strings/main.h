#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_strcat(char *first, char *second);
char *_strncat(char *first, char *second, int n);
char *_strncpy(char *first, char *second, int n);
int _strcmp(char *v1, char *v2);
void reverse_array(int *a, int n);
char *string_toupper(char *a);
char *cap_string(char *a);
char *leet(char *a);
char *rot13(char *a);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
