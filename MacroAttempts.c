#include <stdio.h>
#include <math.h>

#define Mean(x,y) (( x + y ) / 2 )
#define absolute(z) (int(3.5))

int main()
{
    float a = Mean(2,3);
    int b = absolute();

    printf("%f%d\n", a, b);
    return 0;

}