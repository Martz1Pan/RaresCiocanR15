#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_to_int(char string[], int number[], int n);

void conversion(char string[], int number[], int &x)
{
	for (int i = 0; i < strlen(string) && string[i] != '\n'; i++)
		number[i] = (int)(string[i] - 48);

	x = (int)(strlen(string));
}

void first_over_9(int number[], int &n)
{
	for (int i = n; i >= 1; i--)
		number[i] = number[i - 1];
	number[0] = 1;
	n++;
}

void sum(char string[])
{
	int number[256] = { 0 }, sum[256] = { 0 };
	int x, y;

	FILE* file;
	file = fopen("in.txt", "r");
	fgets(string, 256, file);
	string[strlen(string) - 1] = '\0';
	conversion(string, sum, x);

	while (fgets(string, 256, file))
	{
		if(string[strlen(string) - 1] == '\n')
			string[strlen(string) - 1] = '\0';
		conversion(string, number, y);

		if (x > y)
		{
			for (int i = y - 1; i >= 0; i--)
			{
				sum[i + (x - y)] += number[i];
			}

			for (int i = x - 1; i >= 1; i--)
			{
				if (sum[i] >= 10)
				{
					sum[i - 1]++;
					sum[i] = sum[i] % 10;
				}
			}
		}
		else
		{
			if (x < y)
			{
				for (int i = x - 1; i >= 0; i--)
				{
					number[i + (y - x)] += sum[i];
				}

				for (int i = y - 1; i >= 1; i--)
				{
					if (number[i] >= 10)
					{
						number[i - 1]++;
						number[i] = number[i] % 10;
					}
				}

				for (int i = 0; i < y; i++)
				{
					sum[i] = number[i];
				}
				x = y;
			}
			else if (x == y)
			{
				for (int i = x - 1; i >= 0; i--)
				{
					sum[i] += number[i];
				}

				for (int i = y - 1; i >= 1; i--)
				{
					if (sum[i] >= 10)
					{
						sum[i - 1]++;
						sum[i] = sum[i] % 10;
					}
				}
			}
		}

		if (sum[0] >= 10)
		{
			sum[0] = sum[0] % 10;
			first_over_9(sum, x);
		}
	}

	string_to_int(string, sum, x);
}


void string_to_int(char string[], int number[], int n)
{
	for (int i = 0; i < n; i++)
		string[i] = (char)(number[i] + 48);
	string[n] = '\0';
}

int main()
{
	char string[256];

	sum(string);

	printf("%s", string);

	return 0;
}