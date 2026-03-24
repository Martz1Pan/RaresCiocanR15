#include "Number.h"
#include <string.h>
#include <iostream>


Number::Number(Number& to_copy_from)
{

}
Number::Number(Number&& to_move_from)
{

}

Number::Number(const char * value, int base)
{
    strcpy(number, value);
    this->base=base;
    //digitCount = strlen(value) - 1;
}

void strrev(char* number)
{
    char aux;
    int digitCount = strlen(number) - 1;

    for(int i = 0; i < digitCount/2 - 1; i++)
    {
        aux = number[i];
        number[i] = number[digitCount - i - 1];
        number[digitCount - i - 1] = aux;
    }
}

int Number :: charToInt(char* number)
{
    int x = 0;

    while(*number != 0)
    {
        if(*number > '0' && *number < '9')
        x = x * 10 + (int)(*number - 48);
        else return -1;
        *number++;
    }

    return x;
}
char* Number :: intToChar(int number)
{
    char* x;
    while(number!=0)
    {
        *x = (char)(number % 10 + 48);
        number /= 10;
        *x++;
    }
    strrev(x);
    return x;
}
// 'A' = 65, '0' = 48
int Number::fromXto10(char* number, int base)
{
    int newNumber = 0;

    while(*number != '\0')
    {
        int pow = GetDigitsCount();
        int x;
        for(int i = 0; i < pow; i++)
            if(*number >= '0' && *number <= '9')
                x = x + (int)(*number - 48);
            else
                x = x+ (int)(*number - 54);

        newNumber += x;
    }

    return newNumber;
}

char* Number::from10toX(int base)
{
    char* newNumber;
    
    int num = 0;
    int x = charToInt(number);
    
    while(x != 0)
    {
        int c = x % base;
        if(base > 9)
            *newNumber = (char)(c + 54);
        else
            *newNumber = (char)(c + 48);
        *newNumber++;
        x /= base;
    }
    strrev(newNumber);

    return newNumber;
}

/*---------Addition and Subtraction Operators----------*/

Number operator+(Number a, Number b)
{
    int A = a.fromXto10(a.number, a.GetBase());
    int B = a.fromXto10(b.number, b.GetBase());
    int baseC = a.GetBase() > b.GetBase()? a.GetBase():b.GetBase();
    Number c(c.intToChar(A+B), baseC);
    return c;
}

Number operator+=(Number a, Number b)
{
    int A = a.fromXto10(a.number, a.GetBase());
    int B = a.fromXto10(b.number, b.GetBase());
    int base = a.GetBase() > b.GetBase()? a.GetBase():b.GetBase();
    a.base = base;
    a.number = a.intToChar(A+B);
}

Number operator-(Number a, Number b)
{
    int A = a.fromXto10(a.number, a.GetBase());
    int B = a.fromXto10(b.number, b.GetBase());
    int baseC = a.GetBase() > b.GetBase()? a.GetBase():b.GetBase();
    Number c(c.intToChar(A-B), baseC);
    return c;
}

Number operator-=(Number a, Number b)
{
    int A = a.fromXto10(a.number, a.GetBase());
    int B = a.fromXto10(b.number, b.GetBase());
    int base = a.GetBase() > b.GetBase()? a.GetBase():b.GetBase();
    a.base = base;
    a.number = a.intToChar(A-B);
}

Number Number :: operator--(int)
{
    
}

Number Number :: operator--()
{

}


/*-------------Comparasion Operators----------------*/


bool Number :: operator>(Number b)
{
    int x = fromXto10(number, GetBase());
    int y = fromXto10(b.number, b.GetBase());
    if(x > y) return true;
    else return false;
}

bool Number :: operator<(Number b)
{
    int x = fromXto10(number, GetBase());
    int y = fromXto10(b.number, b.GetBase());
    if(x < y) return true;
    else return false;
}

bool Number :: operator>=(Number b)
{
    int x = fromXto10(number, GetBase());
    int y = fromXto10(b.number, b.GetBase());
    if(x >= y) return true;
    else return false;
}

bool Number :: operator<=(Number b)
{
    int x = fromXto10(number, GetBase());
    int y = fromXto10(b.number, b.GetBase());
    if(x <= y) return true;
    else return false;
}

bool Number :: operator==(Number b)
{
    int x = fromXto10(number, GetBase());
    int y = fromXto10(b.number, b.GetBase());
    if(x == y) return true;
    else return false;
}

bool Number :: operator!=(Number b)
{
    int x = fromXto10(number, GetBase());
    int y = fromXto10(b.number, b.GetBase());
    if(x != y) return true;
    else return false;
}

int Number :: operator[](int index)
{
    return this->number[index];
}

Number Number :: operator=(int number)
{

}

Number Number :: operator=(char* number)
{

}

/*----------------Boring stuff------------------*/
void Number :: SwitchBase(int newBase)
{
    int currentBase = GetBase();

    
}

void Number :: Print()
{
    for(int i = 0; i < digitCount; i++)
    {
        std::cout << number[i];
    }
}

int  Number :: GetDigitsCount()
{
    return this->digitCount;
}

int  Number :: GetBase()
{
    return this->base;
}