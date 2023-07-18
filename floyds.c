#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
    int d[10][10];
    int i,j,k,n;
    printf("\nEnter the Number of Nodes:");
    scanf("%d",&n);
    printf("\nEnter the Cost Matrix:");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&d[i][j]);
    for(k=0;k<n;k++)
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
    printf("\nThe Shortest Path is:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",d[i][j]);
            printf("\n");
        }
    }
}
int min(int a,int b)
{
    if(a>b)?a:b;
}
