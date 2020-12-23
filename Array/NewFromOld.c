#include <stdio.h>

int main ()
{
    int a1[5], a2[5], i;

    for (i=0; i<5; i++)
    {
        printf("Enter %d element:",i); scanf("%i", &a1[i]);
    }

    for (i=0, j=4; i<5 ; i++, j--)
    {
        a2[i] = a1[5-i];
    }
    
    printf("The elements of array 2 are:\n");

    for (i=0; i<5; i++)
    {
        printf("%d  ", a2[i]);
    }

    return 0;
}