#include <stdio.h>

int main()
{
    int n=3;
    int a[n][n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=0;j<n;j++)
        {
            s = s+ a[j][i];
        }
        printf("Sum of %d column is: %d\n",i+1,s);
    }    
}