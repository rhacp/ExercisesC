#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Să se determine minimul dintre elementele unui vector.
	int m, x[100], minValue = 0;
	printf("max index = ");
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < m; i++)
	{
		if (x[i] < minValue)
		{
			minValue = x[i];
		}
	}
	printf("The min value is: %d", minValue);
}