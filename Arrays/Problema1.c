#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Sum of all odd numbers.
	int m, x[100], result = 0;
	printf("max index = ");
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < m; i++)
	{
		if (x[i] % 2 == 1)
		{
			result += x[i];
		}
	}

	printf("Sum of odd numbers: %d", result);
}