#include <stdio.h>
int val(int x);
int sign(int x);

int main()
{
	int a[25], Val, Sign, i;
	for (i=0 ; i<25 ; i++)
	{
		printf("Enter the element:"); scanf("%i", &a[i]);
	}
	for (i=0 ; i<25 ; i++)
	{
		Val = val(a[i]);
		Sign = sign(a[i]);
		if (a[i]==0)
		{
			printf("Element is zero\n");
		}
		else
		{
			if (Val == 1 && Sign == 1)
			{
				printf("The element %i is Positive and even\n", a[i]);
			}
			else if (Val == 0 && Sign == 1)
			{
				printf("The element %i is Positive and odd\n", a[i]);
			}
			else if (Val == 0 && Sign == 0)
			{
				printf("The element %i is Negative and odd\n", a[i]);
			}
			else if (Val == 1 && Sign == 0)
			{
				printf("The element %i is Negative and even\n", a[i]);
			}
		}
	}

	return 0;

}

int sign(int x)
{
	if (x>0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int val(int x)
{
	if (x%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
