#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Write a program in C to count the frequency of each element of an array. 
	int m, x[100], maxValue = 0, freq[100], i, j, ctr;
	printf("max index = ");
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
        freq[i] = -1;
	}

    for (i = 0; i < m; i++)
    {
        ctr = 1;
        for (j = i + 1; j < m; j++)
        {
            if (freq[i] != 0)
            {
                if (x[i] == x[j])
                {
                    ctr++;
                    freq[j] = 0;
                }
            }
        }

        if (freq[i] != 0)
        {
            freq[i] = ctr;
        }
    }

    for (i = 0; i < m; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d occurs %d times\n", x[i], freq[i]);
        }
    }
}