#include <stdio.h>
#include <math.h>
int main()
{
    float r,p,a=0,n;
    int q,i;

    printf("*Loop starting*\n\n");
    for (i=1;i++<=10;)
    {
        printf("Enter principle amount:"); scanf("%f",&p);
        printf("Enter rate interest:"); scanf("%f", &r);
        printf("Enter time:"); scanf("%f", &n);
        printf("Enter how many times:"); scanf("%d", &q);

        a= p*pow((1+r/q),n*q);

        printf("The Interest compounds to a value of %f currency\n",a);
    }

    printf("*Loop ended*\n");
    return 0;
}