#include <stdio.h>

int input(int q[6][6]);
int add(int x[6][6], int y[6][6]);

int main()
{
    int a[6][6], b[6][6];

    input(a);
    input(b);
    add(a,b);

    int i, j;
    for (i=0 ; i<6 ; i++)
    {
        for (j=0 ; j<6 ; j++)
        {
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }

    return 0; 
}

int input(int q[6][6])
{
    int i, j;
    for (i=0 ; i<6 ; i++)
    {
        for (j=0 ; j<6 ; j++)
        {
            printf("Enter the value of %i in %i row:",i ,j); scanf("%i", &q[i][j]);
        }
    }
}

int add(int x[6][6], int y[6][6])
{
    int i, j;
    for (i=0 ; i<6 ; i++)
    {
        for (j=0 ; j<6 ; j++)
        {
            x[i][j] += y[i][j];
        }
    }
}