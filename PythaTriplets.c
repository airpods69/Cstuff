#include <stdio.h>

int main()
{
    int n1,n2,n3,i,j,k;
    printf("*Loop Starting*\n\n");
    for (i=1 ; i < 31 ; i++)
    {
        for (j=1 ; j < 31 ; j++)
        {
            for (k=1 ; k < 31 ; k++)
            {
                if (k*k == i*i + j*j)
                {
                    printf("(%i , %i, %i)\n",i,j,k); 
                }
                else if (i*i == j*j + k*k)
                {
                    printf("(%i , %i , %i)\n",i,j,k);
                }
                else if (j*j == i*i + k*k)
                {
                    printf("(%i , %i , %i)\n",i,j,k);
                }
            }
        }
    }
    printf("\n*Loop Finished*\n");

    return 0;
}