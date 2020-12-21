#include <stdio.h>

void prime(int num, int i);
int main()
{
    int num, primefactors;

    printf("\n*Program Starting*\n\n");
    printf("Enter a Number:"); scanf("%d", &num);

    printf("Prime factors of %d are:\n", num);

    prime(num,2);

    printf("\n\n*Program Ended*\n");

    return 0;   
}
void prime (int num, int i)
{
    if (i<=num)
    {
        if (num % i == 0)
        {  
            printf("%d ",i);
            num = num/i;
            i++;
            prime (num,i);
        }
        else
        {
            i++;
            prime (num,i);
        }
        
    }
    
}