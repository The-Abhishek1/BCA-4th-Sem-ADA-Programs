#include<stdio.h>

int gcd(int a,int b);

void main()
{
    int a,b;
    printf("\nEnter Two numbers:");
    scanf("%d%d",&a,&b);
    printf("\n The GCD of %d and %d is %d",a,b,gcd(a,b));
}

int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}