#include<stdio.h>
#include<time.h>

void main()
{
    int a[10],n,i,j,temp;
    double dt;
    clock_t et,st;
    st=clock();
    et=clock();
    printf("Enter the Siz of the Array:\n");
    scanf("%d",&n);
    printf("Enter the Array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Elements Before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    //Sorting 
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray Elements After sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    dt=((double)(et-st)/CLOCKS_PER_SEC);
    printf("Time is:%f",dt);
}