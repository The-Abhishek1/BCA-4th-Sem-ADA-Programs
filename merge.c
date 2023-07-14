#include<stdio.h>
#include<conio.h>
void  mergesort(int a[ ], int low, int high);
void  merge(int a[ ], int low, int mid, int high);
void main( )
{
  	int a[10], n, i;
  	clrscr( );
  	printf("Enter the number of elements:");
  	scanf("%d", &n);
  	printf("Enter the array elements:");
  	for(i=0; i<n; i++)
    		scanf("%d", &a[ i ]);
  	mergesort(a, 0, n-1);
  	printf("\nThe sorted array is\n");
  	for(i=0; i<n; i++)
    		printf("%d\t", a[ i ]);
  	getch( );
}
void mergesort(int a[ ], int low, int high)
{
   	int mid;
   	if(low < high)
   	{
     		mid = (low+ high)/2;
     		mergesort(a, low, mid);
     		mergesort(a, mid+1, high);
     		merge(a, low, mid, high);
   	}
}
void merge(int a[ ], int low, int mid, int high)
{
  	int   i, j, k, c[10];
  	i = low;
  	k = low;
  	j = mid+1;
  	while((i <= mid) && (j <= high))
  	{
      		if(a[ i ] < a[ j ])
      		{
	    		c[k] = a[ i ];
	    		k++;
	    		i++;
      		}
else
       		{
	    		c[k] = a[ j ];
	    		k++;
	    		j++;
      		}
	}
      	while(i <= mid)
	{
		c[k] = a[ i ];
		k++;
		i++;
      	}
	while(j <= high)
	{
		c[k] = a[ j ];
	 	k++;
	 	j++;
      	}
	for( i = low; i <= k-1; i++)
		a[ i ] = c[ i ];
}