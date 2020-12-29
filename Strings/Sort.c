#include <stdio.h>
#include <string.h>

int main()
{
	int i, j;

	char *str[]= {"ahahahhaa","fuck","moda","sistah","broda"};
	char *t;

	for (i=0 ; i<5 ; i++)
	{
		for (j=i+1 ; j<5 ; j++)
		{
			if ((strcmp(str[i],str[j]))>0)
			{
				t = str[i];
				str[i] = str[j];
				str[j] = t;
			}
		}
	}

	for(i=0 ; i<5 ; i++)
	{
		printf("%s ", str[i]);
	}

	printf("\n");
	
	return 0;
}
