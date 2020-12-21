#include <stdio.h>
int main()
{
    int i, counter=1, oooo=0;

    printf("*Output Starting*\n\n");
    for (i=1; i<11;i++)
    {
        printf("%i   ",i);
        oooo+=1;
        if (counter == oooo) {
            printf("\n");
            counter += 1;
            oooo = 0;
        }
    }

    return 0;
}