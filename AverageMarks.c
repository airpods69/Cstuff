#include <stdio.h>

int main()
{
	int i,avg,Marks[10],sum=0;

	for (i=0;i<=10;i++)
	{
		printf("Marks obtained:");scanf("%i",&Marks[i]);
	}

	for (i=0;i<=10;i++)
	{
		sum += Marks[i];
		printf("sum is %i\n",sum);
	}

	avg=sum/i;
	printf("The average is %i\n",avg);
	return 0;
}

