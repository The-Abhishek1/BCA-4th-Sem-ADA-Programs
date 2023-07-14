#include<stdio.h>

void  quicksort(int a[ ], int low, int high);
int  partition(int a[ ], int low, int high);
void main( )
{
  	int a[10], n, i;
  	printf("Enter the number of elements:");
  	scanf("%d", &n);
  	printf("Enter the array elements:");
  	for(i=0; i<n; i++)
    		scanf("%d", &a[ i ]);
  	quicksort(a, 0, n-1);
  	printf("\nThe sorted array is\n");
  	for(i=0; i<n; i++)
    		printf("%d\t", a[ i ]);
}
void quicksort(int a[ ], int low, int high)
{
   	int pos;
   	if(low < high)
   	{
     		pos = partition(a, low, high);
     		quicksort(a, low, pos-1);
     		quicksort(a, pos+1, high);
   	}
}
int partition(int a[ ], int low, int high)
{
  	int x, up, down, temp;
  	x = a[low];
  	up = high;
  	down = low;
  	while(down < up)
  	{
    		while((a[down] <= x) && (down < high))
      		down = down+1;
    		while(a[up] > x)
      			up = up-1;
    		if(down < up)
    		{
      			temp = a[down];
      			a[down] = a[up];
      			a[up] = temp;
    		}
  	}
  	a[low] = a[up];
  	a[up] = x;
  	return(up);
}