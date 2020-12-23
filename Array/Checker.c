#include <stdio.h>
int main()
{
	int a[25], i;
	for (i=0; i<25; i++)
	{
		printf("Enter element:");
		scanf("%i", &a[i]);
	}
	printf("\n");

	for (i=0; i<25; i++)
	{
		if (a[i] == a[24-i])
		{
			printf("True\n");
		}
		else
		{
			printf("False\n");
		}
	}

	return 0;
}

