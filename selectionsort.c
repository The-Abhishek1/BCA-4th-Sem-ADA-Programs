#include<stdio.h>
#include<time.h>

void main()
{
    int a[20],n,i,j,small,temp;
    double dt;
    clock_t st,et;
    st=clock();
    et=clock();
    printf("\nEnter the  Size of Array:\n");
    scanf("%d",&n);
    printf("\nEnter the Array Elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nArray Elements Before Sorting:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    //Sorting
    for(i=0;i<n;i++)
    {   
        small=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[small])
            small=j;
        }
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
    }
    printf("Array Elements After Sorting:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    dt=((double)(et-st)/CLOCKS_PER_SEC);
    printf("Time is:%f",dt);
}