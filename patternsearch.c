#include<stdio.h>
#include<time.h>
#include<string.h>

void main()
{
    char p[20],t[20];
    int i,j,k=1,n,m,flag=0;
    double dt;
    clock_t et,st;
    et=clock();
    st=clock();
    printf("\nEnter the Text:");
    gets(t);
    printf("\nEnter the Pattern to be Searched:");
    gets(p);
    n=strlen(t);
    m=strlen(p);
    //Pattern Searching
    for(i=0;i<=n-m;i++)
    {
       j=0;
       while(j<m&&p[j]==t[i+j])
       {    
            j=j+1;
            if(j==m)
            {
                flag=1;
                k=i+1;
            }
            if(flag==1)
            break;
        }
    }
    if(flag==1)
    {
        printf("\nPttern found at location %d",k);
    }
    else{
        printf("\nPattern not found");
    }
    dt=((double)(et-st)/CLOCKS_PER_SEC);
    printf("\nTime is:%f",dt);
}