#include <stdio.h>
int sum(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}

int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
}