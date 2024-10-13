#ifndef STRING_H
#define STRING_H

#include <stdbool.h>

int strlen(const char* ptr);
bool isdigit(char c);
char* strcpy(char* dest, const char* src);
int tonumericdigit(char c);
int strnlen(const char* ptr, int max);
int istrncmp(const char* s1, const char* s2, int n);
int strncmp(const char* s1, const char* s2, int n);
int strnlen_terminator(const char* str, int max, char terminator);
char tolower(char s1);
void* memcpy(void* dest, void* src, int len);


#endif