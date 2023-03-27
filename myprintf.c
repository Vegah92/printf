#include "main.h"
/**
*_printf - entry point
*@format:function parameter
*/
void _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;

if (*format == 'd')
{
int num = va_arg(args, int);
char str[32];
myitoa(num, str, 10);
myputs(str);
}
else if (*format == 's')
{
char *str = va_arg(args, char*);
myputs(str);
}
else if (*format == 'c')
{
int ch = va_arg(args, int);
myputchar((char) ch);
}
else if (*format == 'f')
{
double d = va_arg(args, double);
int whole = (int) d;
int decimal = (int) ((d - whole) * 1000000);
char str[32];
myitoa(whole, str, 10);
myputs(str);
myputchar('.');
myitoa(decimal, str, 10);
myputs(str);
}
else if (*format == 'x')
{
int num = va_arg(args, int);
char str[32];
myitoa(num, str, 16);
myputs(str);
}
else
{
/* handle other format specifiers*/
}
}
else
{
myputchar(*format);
}
format++;
}
va_end(args);
}

