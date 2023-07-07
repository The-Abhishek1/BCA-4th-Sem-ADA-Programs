#include<stdio.h>

void main()
{
    int i,n,sum=0,count=0,a[20];
    count=count+1;
    printf("Enter the Size of the Array:");
    scanf("%d",&n);
    count=count+1;
    printf("Enter the Array Elements:");
    for(i=0;i<n;i++)
    {
        count=count+1;
        scanf("%d",&a[i]);
    }
    count=count+1;
    for(i=0;i<n;i++)
    {
        count=count+1;
        sum=sum+i;
        count=count+1;
    }
    count=count+1;
    printf("Sum of %d values is:%d and Count is:%d",n,sum,count);

}