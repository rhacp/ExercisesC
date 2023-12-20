#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Program for getting the diagonal of a square matrix.
	int m, i, j, a[40][40];
	printf("m="); scanf("%d", &m);

	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == j)
				printf("%d ", a[i][j]);
		}
	}
}