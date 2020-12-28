#include <stdio.h>
#include <string.h>

int main()
{
	int num, sum, i;
	char book[10];

	printf("Enter a ISBN code:");scanf("%s", book);

	if (strlen(book)<10)
	{
		printf("Invalid code\n");
		return 1;
	}

	else if (strlen(book)>10)
	{
		printf("Invalid code\n");
		return 1;
	}

	else
	{
		for (i=0; i<10 ; i++)
		{
			num = (10-i) * (book[i] - 48);
			sum += num;
		}

		if (sum%11==0)
		{
			printf("The ISBN code is valid\n");
			
			return 0;
		}
		else
		{
			printf("The ISBN code is invalid\n");

			return 1;
		}
	}
}

