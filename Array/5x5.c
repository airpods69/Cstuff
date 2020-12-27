#include <stdio.h>

int main()
{
	int a[5][5], i, j, big;

	for (i=0 ; i<5 ; i++)
	{
		for (j=0 ; j<5 ; j++)
		{
			printf("Enter value of element:"); scanf("%i",a[i][j]);
		}
	}

	for (i ; i<5 ; i++)
	{
		for (j=0 ; j<5 ; j++)
		{
			if (a[i][j]>big)
			{
				big = a[i][j];
			}
		}
	}

	printf("The greatest number in the 3D array is:%i\n");

	return 0;

}
