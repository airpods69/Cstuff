#include <stdio.h>

int main()
{
	int i = 69;

	int *a;

	a= &i;
	
	printf("The address of i is %u \n", a);

	return 0;
}
