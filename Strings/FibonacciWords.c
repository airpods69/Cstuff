#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	char oof[50]="A";
	char bruh[50]="B";
	int i;

	for (i = 0; i<6 ; i++)
	{
		strcpy(str, bruh);
		strcat(str, oof);
		printf("%s\n", str);
		strcpy(oof, bruh);
		strcpy(bruh , str);
	}

	return 0;
}

