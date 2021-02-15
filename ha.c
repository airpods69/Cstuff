#include <stdio.h>

int main()
{
    int sum =0, num, num1;
    scanf("%d", &num);
    num1=num;
    while (num!=0)
    {
        sum += num%10; num=num/10;
    }
}