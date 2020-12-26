#include <stdio.h>
void display (int []);
int modify(int []);
int main()
{
	int a[] = {12,253,63,23,6,74,5473,5,34,42}, i, modi[10];

	printf("The elements of the array are:\n");
	
	display(&a[0]);
	modi[10] = modify(&a[0]);

	printf("The new elements are:\n");
	display(&modi[10]);

	return 0;
}
void display(int j[])
{
	int i;
	for (i=0 ; i<10 ; i++)
	{
		printf("%i ", j[i]);
	}

	printf("\n");
}
int modify(int k[])
{
	int i;
	for (i=0; i<10 ; i++)
	{
		k[i] *= 3;
	}
	return k;
}
