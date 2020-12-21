#include <stdio.h>

int main()
{
    long long bin = 0;
    int rem, i = 1, step = 1, n;
    printf("Enter a Number:");scanf("%d", &n);
    while (n != 0) 
    {
        rem = n % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    printf("The binary equivalent is %lld\n", bin);

}