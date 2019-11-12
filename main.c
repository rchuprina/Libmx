#include "libmx.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
//2147483647

void printnull(char *str)
{
    if (!str)
        mx_printstr("NULL");
    else
    {
        while (*str)
        {
            mx_printchar(*str);
            str++;
        }
        if (!(*str))
            mx_printstr("\\0");
    }
}

int stararrlen(char **arr)
{
    int i = 0;

    for (; arr[i]; i++);
    return i;
}

#define N 10
int main()
{
    char *str = mx_strdup("7YdxCtmSpJ2hSKceNOxqFBREkY4P");
    printnull(mx_memmove(&str[1], str, 9));
   // mx_printstr("\n");
}
