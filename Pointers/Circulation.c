#include <stdio.h>

int circular(int *,int *, int*);
int main()
{
    int x, y, z;

    printf("Enter the value of x:"); scanf("%d", &x);
    printf("Enter the value of y:"); scanf("%d", &y);
    printf("Enter the value of z:"); scanf("%d", &z);

    circular(&x,&y,&z);

    printf("The value of x is %i\n", x);
    printf("The value of y is %i\n", y);
    printf("The value of z is %i\n", z);

    return 0; 
}
int circular(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c; 
    *c = temp;
}