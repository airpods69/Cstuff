#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, angle, area, area_max, ara[6], temp;
	int i, j;

	for (i=0 ; i<6 ; i++)
	{
		printf("Enter value of side A:"); scanf("%f", &a);
		printf("Enter value of side B:"); scanf("%f", &b);
		printf("Enter value of Angle between them:"); scanf("%f", &angle);

		ara[i] = 0.5 * a * b * sin(angle);

		printf("The area of triangle is %f\n", ara[i]);
	}

	/* Insertion sorting */

	for (i=0 ; i<6 ; i++)
	{
		for (j=0 ; j<6 ; j++)
		{
			if (ara[j]<ara[i])
			{
				temp = ara[i];
				ara[i] = ara[j];
				ara[j] = temp;
			}
		}
	}

	area_max = ara[0];
	printf("The max area is %f\n", area_max);

	return 0;
}
