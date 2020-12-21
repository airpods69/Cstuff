#include <stdio.h>

int Fact(int n);
int main()
{
    int num,factorial;
    printf("\n*Program Starting*\n\n");
    printf("Enter the number:"); scanf("%i", &num);

    factorial = Fact(num);

    printf("The factorial of %d is %d\n",num,factorial);

    printf("\n*Program Ending*\n");

    return 0;
}

int Fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*Fact(n-1);
    }
}