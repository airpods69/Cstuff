#include <stdio.h>
void main()
{
    int num=1331;
    int len=0;
    while(num>0)
    {
        len++;
        num/=10;
    }
    printf(" lenmght of the number is: %d",len);
}