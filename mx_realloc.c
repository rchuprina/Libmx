#include "libmx.h"

void *mx_realloc(void *ptr, size_t size)
{
    return mx_strndup((const char *)ptr, size);
}

