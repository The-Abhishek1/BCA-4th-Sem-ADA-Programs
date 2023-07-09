#include<stdio.h>

int a,b,u,v,n,i,j,ne=1;
int vis[10]={0},min,mincost=0,c[10][10];

void main()
{
    printf("\nEnter the Number of Nodes:");
    scanf("%d",&n);
    printf("\nEnter the Adjacency Matrix:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&c[i][j]);
            if(c[i][j]==0)
            c[i][j]=999;
        }
    }
    vis[1]=1;
    printf("\n");
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        for(j=1;j<=n;j++)
        if(c[i][j]<min)
        if(vis[i]!=0)
        {  
            min=c[i][j];
            a=u=i;
            b=v=j;
        } 
        if(vis[u]==0||vis[v]==0)
        {
            printf("\nEdge %d : (%d %d) cost:%d",ne++,a,b,min);
            mincost+=min;
            vis[b]=1;
        }  
        c[a][b]=c[b][a]=999; 
    }
    printf("\n Minimum cost %d",mincost);
    
}