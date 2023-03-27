#include "main.h"

/**
*myitoa - entry point
*@str:function parameter
*@base:parameters
*@n:counter
*/

void myitoa(int n, char *str, int base)
{

int begin;
int end;
int i = 0;
int sign = 0;

if (n == 0)
{
str[i++] = '0';
str[i] = '\0';
return;
}

if (n < 0 && base == 10)
{
sign = 1;
n = -n;
}

while (n != 0)
{
int rem = n % base;
str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
n = n / base;
}

if (sign)
{
str[i++] = '-';
}
str[i] = '\0';

begin = 0;
end = i - 1;
while (begin < end)
{
char temp = str[begin];
str[begin++] = str[end];
str[end--] = temp;
}
}

