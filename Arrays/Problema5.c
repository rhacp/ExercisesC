#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Să se determine maximul dintre elementele unui vector.
	int m, x[100], maxValue = 0;
	printf("max index = ");
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < m; i++)
	{
		if (x[i] > maxValue)
		{
			maxValue = x[i];
		}
	}
	printf("The max value is: %d", maxValue);
}