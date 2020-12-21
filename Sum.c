#include <stdio.h>

int Sum(int num);
int main()
{
    int num,sum;
    
    printf("\n*Program Starting*\n\n");
    printf("Enter a 5 digit number:"); scanf("%d", &num);

    if (num>10000 && num<100000)
    {
        sum = Sum(num);
        
        printf("Sum is %d\n", sum);
        printf("\n*Program Stopping\n");
        
        return 0;
    }
    
    else
    {
        printf("The number isnt of 5 digits, Try again\n");
        printf("\n*Program Stopping\n");

        return 0;
    }

}

int Sum(int num)
{
    int remainder;

    if (num==0)
    {
        return 0;
    }
    else
    {
        remainder = num % 10;
        return remainder + Sum(num/10);
    }
}