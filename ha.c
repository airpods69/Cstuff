#include<stdio.h>
int lsearch(int a[100],int size,int sno)
{
int i,flag=0;
for(i=0;i<size;i++)
{
    if(a[i]==sno)
    {
        flag=1;
        break;
    }
}
if(flag==1)
    return 1;
else
{
    return 0;
}

}
int main()
{
    int n,ar[100],sno;
    printf("enter the number to be searched:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter:");
        scanf("%d",ar[i]);

    }
    printf("number to be searched:");
    scanf("%d",sno);
    int k=lsearch(ar[100],n,sno);
    if(k==1) 
    printf("found");
    else
    {
        printf("not found");
    }
    
return 0;

}