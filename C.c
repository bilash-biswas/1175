#include<stdio.h>
int main()
{
    int a[20],i,j,N[20];
    for(i=0;i<20;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=19,j=0;i>=0,j<20;i--,j++)
    {
        N[j]=a[i];
        printf("N[%d] = %d\n",j,N[j]);
    }

    return 0;
}
