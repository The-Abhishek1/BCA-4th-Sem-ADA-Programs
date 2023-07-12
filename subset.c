#include<stdio.h>

int s[10],x[10],d,n;
void sumofsub(int,int,int);

void main(){
    int sum=0,i;
    printf("\n Enter the Size of the set:");
    scanf("%d",&n);
    printf("\n Enter the set in increasing order:");
    for(i=1;i<=n;i++){
        scanf("%d",&s[i]);
    }
    printf("\n Enter the value of d:");
    scanf("%d",&d);
    for(i=1;i<=n;i++)
    sum=sum+s[i];
    if(sum<d||s[1]>d){
        printf("\n No Subset possible:");
    }
    else{
        sumofsub(0,1,sum);
    }
}
void sumofsub(int m,int k,int r){
    int i=1;
    x[k]=1;
    if((m+s[k]==d))
    {
        printf("\n Subset:");
        for(i=1;i<=n;i++)
        if(x[i]==1)
        printf("\t%d",s[i]);
        printf("\n");
    }
    else{
        if(m+s[k]+s[k+1]<=d){
            sumofsub(m+s[k],k+1,r-s[k]);
        }
        if((m+r-s[k]>=d)&&(m+s[k+1<=d]))
        {
            x[k]=0;
            sumofsub(m,k+1,r-s[k]);
        }
    }
}