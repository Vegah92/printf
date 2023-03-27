#include "main.h"

/**
*myputs - entry
*@str:parameter
*/

void myputs(const char *str)
{
while (*str)
{
myputchar(*str++);
}
}

