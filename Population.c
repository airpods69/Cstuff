#include <stdio.h>

int main()
{
    int pop=10000, i;

    for (i=0 ; i<10 ; i++)
    {
        printf("Population at the end of %i year is %d\n",i,pop);
        pop += pop*0.1;
    }

    printf("The population of the country after 10 year would be %d\n", pop);
    
    return 0;

}