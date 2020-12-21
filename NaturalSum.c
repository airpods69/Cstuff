#include <stdio.h>

int Sum(int num);

int main()
{
    int num=25, sum;
    sum = Sum(num);
    printf("The sum of first 25 numbers is %d\n",sum);

    return 0;
}

int Sum(int num)
{
    if (num==1)
    {
        return 1;
    }
    else 
    {
        return num + Sum(num-1);
    }
}