#include <stdio.h>
#include <string.h>

int main()
{
	char s[]= "Kakashi";
	char scopy[25];

	strcpy(scopy , s);

	printf("Copied and it is %s\n", scopy);

	return 0;
}
