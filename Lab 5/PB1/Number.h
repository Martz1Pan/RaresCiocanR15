#ifndef NUMBER_H
#define NUMBER_H
class Number
{
   char* number;
   int base;
   int digitCount;
public:
   Number(const char * value, int base); // where base is between 2 and 16
   ~Number();
   //posibile apucaturi la streang
   Number(Number& to_copy_from);
   Number(Number&& to_move_from);

   //useless shit

   int charToInt(char* number); // converts from char to int
   char* intToChar(int number);
   int fromXto10(char* number, int base); //baza x is a bitch
   char* from10toX(int base); // baza 10 is a bitch

   // add operators and copy/move constructor
   //<, >, <=, >=, ==, ...
   Number operator=(int number);
   Number operator=(char* number); //motivu principal pentru care mi as lua zilele
    
   friend Number operator+(Number a, Number b);
   friend Number operator+=(Number a, Number b);
   friend Number operator-(Number a, Number b);
   friend Number operator-=(Number a, Number b);

   Number operator--(int);
   Number operator--();

   bool operator>(Number b);
   bool operator<(Number b);
   bool operator>=(Number b);
   bool operator<=(Number b);
   bool operator==(Number b);
   bool operator!=(Number b);

   //[] operator
   int operator[](int index);

   void SwitchBase(int newBase);
   void Print();
   int  GetDigitsCount(); // returns the number of digits for the current number
   int  GetBase(); // returns the current base
};
#endif