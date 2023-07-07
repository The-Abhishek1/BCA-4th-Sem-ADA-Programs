#include<stdio.h>
#include<time.h>

void main()
{
    int a[20],n,sum=0,i;
    double dt;
    clock_t st,et;
    st=clock();
    et=clock();
    printf("Enter the Size of the Array:\n");
    scanf("%d",&n);
    printf("Enter the Array Elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    // Calculating Sum
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    printf("The Sum of %d Natural Numbers are:%d",n,sum);
    dt=((double)(et-st)/CLOCKS_PER_SEC);
    printf("Time is:%f",dt);
}