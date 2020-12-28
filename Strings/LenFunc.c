#include <stdio.h>

int len(char *);

int main()
{
	char arr[] = "SexyMama69";
	int len1;

	len1 = len(arr);

	printf("The length of string is %i\n", len1);

	return 0;
}

int len(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length ++;
		s++;
	}

	return length;
}
