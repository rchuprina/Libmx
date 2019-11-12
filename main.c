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

void printn(char *str, int n)
{
    if (!str)
      mx_printstr("NULL");
    else
    {
        while (n--)
        {
            mx_printchar(*str);
            str++;
            if (!(*str))
                mx_printstr("\\0");
        }
    }
}
int quicksort(char **arr, int left, int right){
    int pivot = (left + right) / 2;
    int i = left;
    int j = right;
    int count = 0;

    if (left < right)
    {

        while (i < j)
        {
            while (mx_strlen(arr[i]) <= mx_strlen(arr[pivot]) && i < right)
                i++;
            while (mx_strlen(arr[j]) > mx_strlen(arr[pivot]))
                j--;
            if (i < j)
                mx_swap_str(&arr[i], &arr[j]);
        }
    mx_swap_str(&arr[pivot], &arr[j]);
    count++;
    count += quicksort(arr, left, j - 1);
    count += quicksort(arr, j + 1, right);
   }
   return count;
}

int stararrlen(char **arr)
{
    int i = 0;

    for (; arr[i]; i++);
    return i;
}
/*
int main()
{
    char **arr = mx_strsplit(mx_file_to_str("file"), ' ');
    //mx_printint(stararrlen(arr));
    //mx_printint(mx_quicksort(arr, 0, 197)); //returns 2
    mx_printint(quicksort(arr, 0, 197)); //returns 2
    mx_print_strarr(arr, "\n");
}*/
#define N 10
int main()
{

    printnull(mx_file_to_str("file"));
    /*char *str = NULL;
    int fd = open("file", O_RDONLY);
    mx_printint(mx_read_line(&str, 4, '.', fd));
    mx_printstr(str);*/
}
