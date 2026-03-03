#include <iostream>

#include "NumberList.h"

int main()
{
	NumberList v;
	
	int x;
	v.Init();
	do {
		std::cin >> x;
	} while (v.Add(x));
	
	v.Sort();
	v.Print();

	return 0;
}