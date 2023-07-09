#include<stdio.h>
#include<time.h>

void main()
{
    int a[20],n,i,item;
    double dt;
    clock_t et,st;
    et=clock();
    st=clock();
    printf("\nEnter the Array Size:");
    scanf("%d",&n);
    printf("\nEnter the Array Elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the Search Element:");
    scanf("%d",&item);
    int low=0,high=n-1;
    BS(a,item,low,high);
    dt=((double)(et-st)/CLOCKS_PER_SEC);
    printf("\nTime is:%f",dt);
}


void BS(int a[],int item,int low,int high)
{
    int mid;
    mid=(low+high)/2;
    if(low>high)
    {
        printf("%d not found",item);
    }
    else if(a[mid]==item)
    {
        printf("\n%d found at location %d",item,mid);
    }
    else if(a[mid]>item)
    {
        BS(a,item,low,high-1);
    }
    else{
        BS(a,item,low+1,high);
    }
}