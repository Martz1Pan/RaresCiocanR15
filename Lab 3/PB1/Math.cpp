#include "Math.h"

int Math :: Add(int x,int y)
{
    return x + y;
}

int Math :: Add(int x, int y, int z)
{
    return x + y + z;
}

int Math :: Add(double x,double y)
{
    return (int)(x + y);
}

int Math :: Add(double x,double y, double z)
{
    return (int)(x + y + z);
}

int Math :: Mul(int x,int y)
{
    return x * y;
}

int Math :: Mul(int x, int y, int z)
{
    return x * y * z;
}

int Math :: Mul(double x,double y)
{
    return (int)(x * y);
}

int Math :: Mul(double x,double y, double z)
{
    return (int)(x * y * z);
}

#include <stdarg.h>

int Math :: Add(int count, ...)
{
    va_list list;
    va_start(list, count);

    int sum = 0;

    for(int i = 0; i < count; i++)
        sum += va_arg(list, int);
    va_end(list);

    return sum;
}

#include <string.h>

char* Math :: Add(const char* x, const char* y)
{
    if(x == nullptr || y == nullptr)
        return nullptr;

    int lenX = strlen(x);
    int lenY = strlen(y);
    
    char *result = new char[lenX + lenY + 1];

    strcpy(result, x);

    strcat(result, y);

    return result;
}