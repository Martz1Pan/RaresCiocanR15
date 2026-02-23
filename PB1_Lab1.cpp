#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int conversion(char string[])
{
	int x = 0;
	for (int i = 0; i < strlen(string) && string[i]!='\n'; i++)
		x = x * 10 + (int)(string[i] - 48);
	return x;
}

int sum(char string[])
{
	int sum = 0;

	FILE* file;
	file = fopen("ini.txt", "r");
	
	while (fgets(string, 256, file))
	{

		sum += conversion(string);
	}

	fclose(file);

	return sum;
}

int main()
{
	char string[256];
	printf("%d\n", sum(string));
	return 0;
}