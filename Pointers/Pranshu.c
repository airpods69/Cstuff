#include <stdio.h>
int main()
{
	int i = 3;
	int * ptr;
	ptr = &i;
	printf("The Address of i is: %p\n", &i);
	return 0;
}
