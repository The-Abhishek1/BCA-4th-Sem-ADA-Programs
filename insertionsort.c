#include<stdio.h>
#include<time.h>

void main()
{
    int a[20],key,n,i,j;
    double dt;
    clock_t et,st;
    et=clock();
    st=clock();
    printf("\nEnter the Array Size:");
    scanf("%d",&n);
    printf("\nEnter the Array Elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nArray Elements Before Sorting:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("\nArray Elements After Sorting:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    dt=((double)(et-st)*1000.0/CLOCKS_PER_SEC);
    printf("\nTime is:%f",dt);
}
