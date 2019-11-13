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

void print_strarr(char **arr, const char *delim)
{
    if (!arr || !delim)
        return;
    int i = 0;
	for (; arr[i]; i++)
    {
        mx_printstr(arr[i]);
        mx_printstr(delim);
    }
    if (!arr[i])
        mx_printstr("NULL");
    mx_printchar('\n');
}

#define N 10
int main()
{
  char *s1 = mx_strdup("qweasd");
  char *s3 = mx_realloc(s1, 2);
  mx_printstr(s1);
  mx_printstr(s3);
}
