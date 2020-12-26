#include <stdio.h>
#include <math.h>

int main()
{
	int a[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2}, i;
	float SD, mean, sum=0;

	for (i=0 ; i<15 ; i++)
	{
		sum += a[i];
	}

	mean = sum/15.0;

	sum = 0;

	for (i=0 ; i<15 ; i++)
	{
		sum += pow ((a[i] - mean), 2);
	}
	
	SD = pow (sum, 1.0/2) / 15;

	printf("The mean is %f\n",mean);
	printf("The standard deviation is %f\n", SD);

	return 0;
}
