#include <stdio.h>
#include <math.h>

int fuck(int , int, int, float *, float *);
int main()
{
	int M1, M2, M3;
	float avg, per;

	printf("Enter the marks in m m m form:"); scanf("%d%d%d", &M1, &M2, &M3);

	fuck(M1, M2, M3, &avg, &per);

	printf("The average and percentage is %f and %f\n", avg, per);

	return 0;
}

int fuck(int m1, int m2, int m3, float *a, float *p)
{
	*a = *p = (m1+m2+m3)/3.0;
}
