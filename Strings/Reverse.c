#include <stdio.h>
#include <string.h>

void rev(char *);
int main()
{
	char str[][35]= {"BRUHHHHHHHHHH", "FUCKKKKKKKKKK", "MARJAAAAA"};
	int i;
	
	for (i=0 ; i<3 ; i++)
	{
		rev(str[i]);
		printf("%s\n", str[i]);
	}

	return 0;
}

void rev(char *s)
{
	int i, l;
	char *t, temp;

	l = strlen(s);

	t = s+l-1;

	for (i=1 ; i<=l/2 ; i++)
	{
		temp = *s;
		*s = *t;
		*t = temp;

		s++;
		t--;
	}
}

