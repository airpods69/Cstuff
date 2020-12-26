#include <stdio.h>
int main()
{
	int a[10], i, j, temp;

	for (i=0 ; i<10 ; i++)
	{
		printf("Enter element(integer):"); scanf("%i", &a[i]);
	}

	for (i=0 ; i<10 ; i++)
	{
		for (j=i ; j<10 ; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("The sorted array is:\n");

	for (i=0 ; i<10 ; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
	
	return 0;
}
