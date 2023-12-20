#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Program for getting matrix value above a given value.
	int m, n, i, j, a[40][30], value;
	printf("m="); scanf("%d", &m);
	printf("n="); scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	printf("value = "); scanf("%d", &value);

	printf("All elements bigger than %d are:\n", value);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			if (a[i][j] > value)
				printf("%d ", a[i][j]);
	}
}