#include <iostream>

#include "Math.h"

int main()
{
    int a,b,c;
    double x,y,z;

    int list[5];
    char *X=new char;
    char *Y=new char;

    Math obj;

    int option;
    
    std::cout << "What would you like to do?\n1) Sum of two integers\n2) Sum of 3 integers\n3) Sum of 2 real numbers\n4) Sum of 3 real numbers\n5) Multiplication of two integers\n6) Multiplication of 3 integers\n7) multiplication of 2 real numbers\n8) Multiplication of 3 real numbers\n9) Sum of ...(you choose how many) integer numbers\n10)Concatenate 2 strings\nYour option: ";
    std::cin >> option; 

    switch (option)
    {
        case 1:
            std::cout << "\nx = ";
            std::cin >> a;
            std::cout << "\n y = ";
            std::cin >> b;
            std::cout << obj.Add(a,b);
            break;
        case 2:
            std::cout << "\nx = ";
            std::cin >> a;
            std::cout << "\n y = ";
            std::cin >> b;
            std::cout << "\n z = ";
            std::cin >> c;
            std::cout << obj.Add(a,b,c);
            break;
        case 3:
            std::cout << "\nx = ";
            std::cin >> x;
            std::cout << "\n y = ";
            std::cin >> y;
            std::cout << obj.Add(x,y);
            break;
        case 4:
            std::cout << "\nx = ";
            std::cin >> x;
            std::cout << "\n y = ";
            std::cin >> y;
            std::cout << "\n z = ";
            std::cin >> z;
            std::cout << obj.Add(x,y,z);
            break;
        case 5:
            std::cout << "\nx = ";
            std::cin >> a;
            std::cout << "\n y = ";
            std::cin >> b;
            std::cout << obj.Mul(a,b);
            break;
        case 6:
            std::cout << "\nx = ";
            std::cin >> a;
            std::cout << "\n y = ";
            std::cin >> b;
            std::cout << "\n z = ";
            std::cin >> c;
            std::cout << obj.Mul(a,b,c);
            break;
        case 7:
            std::cout << "\nx = ";
            std::cin >> x;
            std::cout << "\n y = ";
            std::cin >> y;
            std::cout << obj.Mul(x,y);
            break;
        case 8:
            std::cout << "\nx = ";
            std::cin >> x;
            std::cout << "\n y = ";
            std::cin >> y;
            std::cout << "\n z = ";
            std::cin >> z;
            std::cout << obj.Add(x,y,z);
            break;
        case 9:
            int count;
            std::cout << "\nHow many numbers?";
            std::cin >> count;
            std::cout << "What numbers?\n";
            for(int i = 0; i< count ;i++)
                std::cin >> list[i];
            std::cout << obj.Add(count, list);
            break;
        case 10:
            std::cout << "First string: ";
            std::cin >> X;
            std::cout << "Second string: ";
            std::cin >> Y;
            std::cout << obj.Add(X,Y);
            break;
        default:
            break;
    }

    return 0;
}