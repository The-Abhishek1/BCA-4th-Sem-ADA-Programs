#include<stdio.h>

int main()
{
    float weight[30],profit[20],ratio[30],totalvalue,temp,capacity;
    int i,j,n;
    printf("\nEnter the No of Items:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the Weight and Profit for the item[%d]:",i);
        scanf("%f %f",&weight[i],&profit[i]);
    }
    printf("\nEnter the Capacity:");
    scanf("%f",&capacity);

    for(i=0;i<n;i++)
    ratio[i]=profit[i]/weight[i];

    printf("\nKnapsack problem using Greedy Method:");

    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    if(ratio[i]<ratio[j])
    {
        temp=ratio[j];
        ratio[j]=ratio[i];
        ratio[i]=temp;

        temp=weight[j];
        weight[j]=weight[i];
        weight[i]=temp;

        temp=profit[j];
        profit[j]=profit[i];
        profit[i]=temp;

    }
    for(i=0;i<n;i++)
    {
        if(weight[i]>capacity)
        break;
        else
        {
            totalvalue=totalvalue+profit[i];
            capacity=capacity-weight[i];
        }
    }
    if(i<n)
    {
        totalvalue=totalvalue+(ratio[i]*capacity);
    printf("\nMaximum value is:%f",totalvalue);
    }
    return 0;

}