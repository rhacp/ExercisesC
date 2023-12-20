#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Să se determine poziția ultimei apariții a unei valori date într‑un vector neordonat.
	int m, x[100], value, index;
	printf("max index = ");
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
	}
	printf("value to search for = ");
	scanf("%d", &value);

	for (int i = 0; i < m; i++)
	{
		if (x[i] == value)
		{
			index = i;
		}
	}
	printf("The index of the last aparition of the %d element is: %d", value, index);
}