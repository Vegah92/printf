#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
void myputchar(char c);
void myputs(const char *str);
void myitoa(int n, char *str, int base);
int _printf(const char *format, ...);

#endif
