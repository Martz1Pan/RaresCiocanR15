#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void str_to_mat(char string[], char matrix[][256], int &n, int lengths[])
{
	int k = 0;

	int i = 0, j = 0;
	while (string[k] != '\0')
	{
		if (string[k] != ' ')
			matrix[i][j++] = string[k];
		else
		{
			if(j > 0)
			{
				matrix[i][j] = '\0';
				lengths[i] = j;
				i++;
				j = 0;
			}
		}
		k++;
	}
	lengths[i] = j - 1;
	n = i + 1;
	if(j > 0)
		matrix[i][j - 1] = '\0';
}

void swap(int lengths[], char matrix[][256], int i, int j)
{
	int aux = lengths[i];
	lengths[i] = lengths[j];
	lengths[j] = aux;

	char c_aux[60];
	strcpy(c_aux, matrix[i]);
	strcpy(matrix[i], matrix[j]);
	strcpy(matrix[j], c_aux);
}

int partition(int lengths[], int p, int q, char matrix[][256])
{
	int x = lengths[p];
	int i = p + 1;
	int j = q;

	while(i < j)
	{
		while(i <= q && lengths[i] >= x) i ++;

		while(j >= p && lengths[j] < x) j--;

		if(i < j)
		{
			swap(lengths, matrix, i, j);
		}
		else 
			if (i == j)
			{
				if (strcmp(matrix[i], matrix[j]) > 0)
				{
						char c_aux[256];
						strcpy(c_aux, matrix[i]);
						strcpy(matrix[i], matrix[j]);
						strcpy(matrix[j], c_aux);
				}
			}
	}
	swap(lengths, matrix, p, j);
	return j;
}

void sort(char matrix[][256], int p, int q, int lengths[])
{
	if(p < q)
	{
		int k = partition(lengths, p, q, matrix);

		sort(matrix, p, k-1, lengths);
		sort(matrix, k + 1, q, lengths);
	}
}

int main()
{
	char string[256], matrix[60][256];

	int n, lengths[60];

	fgets(string, 256, stdin);

	str_to_mat(string, matrix, n, lengths);

	sort(matrix, 0, n - 1, lengths);

	for (int i = 0; i < n; i++)
		printf("%s\n", matrix[i]);

	return 0;
}