#include "libmx.h"

int mx_strarr_size(char **sarr)
{
    int i = 0;

    while (sarr[i])
        i++;
    return i;

}

