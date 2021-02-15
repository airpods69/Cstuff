#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float x[11], y[11], r, sum1=0, sum2=0, sum3=0, sum4=0, sum5=0;

    for (i=0;i<11;i++)
    {
        sum1 += x[i]*y[i];
        sum2 += x[i];
        sum3 += y[i];
        sum4 += x[i]*x[i];
        sum5 += y[i]*y[i];
    }

    r = (sum1 - sum2*sum3)/sqrt((n*sum4 - sum2*sum2)*(n*sum5 - sum4*sum4));

    printf("%d\n", r);

    return 0;
}