#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

int _putchar(char c);
char *_memset(char *s, char *src, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char * haystack, char * needle);
void print_chessboard(char (8a)[8]);
void print_diagsums(int *a, int size);
#endif /*MAIN_H*/
