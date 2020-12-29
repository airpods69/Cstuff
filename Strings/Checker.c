#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char *str[] = {"Fuck You", "You Trash", "You bitch"};

	char str1[20], *p;

	printf("Enter string to be searched for:\n"); scanf("%s", str1);

	p= NULL;

	for (i=0; i<3 ; i++)
	{
		p = strstr(str[i],str1);

		if (p != NULL)
		{
			printf("%s Found!\n",str[i]);
			return 0;
		}
	}

	printf("%s Not Found...\n", str1);
	return 0;
}
