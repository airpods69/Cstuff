#include <stdio.h>
int main()
{
    int num,num1,numpal=0;
    scanf("%d", &num);
    num1=num;
    while (num>=10)
    {
        numpal*=10;
        numpal+=num%10;
        num/=10;
    }
    numpal*=10;
    numpal+=num%10; 
    num-=num%10;
    num/=10;

    printf("%d\n", numpal);

    if (num1==numpal)
    {
        printf("%d is a palindrome\n", num1);
    }
    else
    {
        printf("%d is not a palindrome\n", num1);
    }

    return 0;
}