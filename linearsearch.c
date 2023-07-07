#include<stdio.h>
#include<time.h>

void main()
{
    int a[10],n,item,i,loc=-1;
    double dt;
    clock_t st,et;
    st=clock();
    et=clock();
    printf("Enter the Size of the Array:\n");
    scanf("%d",&n);
    printf("Enter the Array Elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the Search Element:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            loc=i+1;
            printf("%d found at loacation %d\n",item,loc);
            break;
        }
    }
    if(loc==-1)
    printf("%d not found in the Array\n");
    dt=((double)(et-st)/CLOCKS_PER_SEC);
    printf("Time is:%f",dt);
}