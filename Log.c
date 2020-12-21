#include <stdio.h>
#include <math.h>
int main()
{
    float log,x;
    int i;

    printf("Enter the number for which log is to be calculated:"); scanf("%f", &x);
    for (i=1;i<=7;i++)
    {
        log += (1.0/i)*pow(((x-1)/x),i);
    }
    printf("The natural log of %f is %f\n",x,log);
    
    return 0;
}