#include<stdio.h>

// A function to implement swapping of two variables
void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
  int i, j;
  for (i = 0; i < n-1; i++)
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
      if (arr[j] > arr[j+1])
        swap(&arr[j], &arr[j+1]);
}

int main()
{
  //n denotes total number of processes
  //h denotes total head Movement
  //x denotes extreme head position
  int n,i,h=0,j,k,x;
  printf("\nEnter number of processes:");
  scanf("%d",&n);
  printf("\nEnter extreme head position:");
  scanf("%d",&x);
  int a[n+1];
  a[0] = 0;

  //taking input of processes from user
  printf("\nEnter processes in request order");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }

  //sorting and calculating total head movements
  bubbleSort(a, n+1);
  for(i=0;i<n;i++)
    h+=(a[i+1]-a[i]);

  //output of the order in which Processing is done
  printf("\nProcessing order:");
  for(i=0;i<=n;i++)
    printf("\t%d",a[i]);
  printf("\n   ^ head position\n");
  for(i=x/4;i>0;i--)
  {
    if(i==x/4)
      printf("%d|",x);
    else if(i==x/8)
      printf("%d|",x/2);
    else
      printf("   |");
    for(j=0;j<=n;j++)
    {
      if(a[j]/4==i)
      {
        for(k=0;k<j*10;k++)
        {
          printf(" ");
        }
        printf("* %d",a[j]);
      }
    }
    printf("\n");
  }
  printf("   ");
  for(i=0;i<x/2;i++)
  {
    printf("-");
  }
  printf("> scheduling");
  printf("\nTotal Head Movement:%d",h);
  return 0;
}
