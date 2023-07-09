#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,j,k,n,a[10][10],p[10][10];
    printf("\nEnter the Number of Nodes:");
    scanf("%d",&n);
    printf("\nEnter the Adjacency matrix:");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("\nFINDING:");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    p[i][j]=a[i][j];
    for(k=0;k<n;k++)
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(p[i][j]==1||p[i][k]==1&&p[k][j]==1)
    p[i][j]=1;
    printf("\nThe Shortest Path is:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
}