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

void sort(char matrix[][256], int n, int lengths[])
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (lengths[i] < lengths[j])
			{
				int aux = lengths[i];
				lengths[i] = lengths[j];
				lengths[j] = aux;

				char c_aux[60];
				strcpy(c_aux, matrix[i]);
				strcpy(matrix[i], matrix[j]);
				strcpy(matrix[j], c_aux);
			}
			else
				if (lengths[i] == lengths[j])
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
}

int main()
{
	char string[256], matrix[60][256];

	int n, lengths[60];

	fgets(string, 256, stdin);

	str_to_mat(string, matrix, n, lengths);

	sort(matrix, n, lengths);

	for (int i = 0; i < n; i++)
		printf("%s\n", matrix[i]);

	return 0;
}