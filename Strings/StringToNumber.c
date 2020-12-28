#include <stdio.h>

int main()
{
	char numstr[6];
	int num=0, i;

	printf("Enter the number:");scanf("%s", numstr);

	for (i=0 ; numstr[i] != '\0' ; i++)
	{
		if (numstr[i] >= 48 && numstr[i] <=57)
		{
			num = num*10 + (numstr[i]-48);
		}
		else 
		{
			printf("Invalid string bruhh\n");
			return 1;
		}
	}

	printf("The number in int form is %i\n", num);

	return 0;
}
