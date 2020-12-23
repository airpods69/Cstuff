#include <stdio.h>

int main()
{
	int Arr[10]={22,839,328,28,38384,28,485,29,10,69};
	int temp, i;

	for (i=0;i<10;i+=2)
	{
		temp= Arr[i];
		Arr[i]=Arr[i+1];
		Arr[i+1]=temp;
	}
	
	for (i=0;i<10;i++)
	{
		printf("%i ",Arr[i]);
	}

	printf("\n");
	return 0;
}

