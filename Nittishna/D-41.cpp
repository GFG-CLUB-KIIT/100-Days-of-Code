#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *p,n,i;
      printf("How many numbers you want to enter: ");
      scanf("%d",&n);
      p=(int*)malloc(n * sizeof(int));
      printf("\nEnter %d Numbers:\n\n",n);
      for(i=0;i<n;i++)
      {
            scanf("%d",p+i);
      }
      printf("\nArray in Reverse Order: \n\n");
      for(i=n-1;i>=0;i--)
      {
            printf(" %d",*(p+i));
      }
      return 0;
}