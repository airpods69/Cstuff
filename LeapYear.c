#include <stdio.h>

void Leap(int);
int main()
{
    int year;
    printf("Enter year:"); scanf("%i", &year);

    Leap(year);

    return 0;
}

void Leap(int year)
{
    if ( year%4 == 0)
    {
        printf("%d is a leap year.\n",year);
    }
    else
    {
        printf("%d  is not a leap year.\n",year);
    }
}