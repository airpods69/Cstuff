#include <stdio.h>

int main()
{
	int i=69;
	int *j;

	j = &i;

	printf("%i\n", j);

	printf("The value stored at j=%u is %i\n", j, *j);

	return 0;
}
