// WAP to arrange the  elements of a dynamic array such that even numbers are followed by odd numbers.

#include <stdio.h>
	#include <stdlib.h>
		 
		int main()
	{
	  int* ptr;
	  int n,j,i,num,v;

	  printf("Enter number of elements:");
	  scanf("%d",&n);
	  printf("Entered number of elements: %d\n", n);
	  ptr = (int*)malloc(n * sizeof(int));

	  for (i = 0; i < n; ++i) {
		scanf("%d", &v);
		ptr[i] = v;
	  }
	  i=0;
	  j=0;
	  while(i<n && j<n){

		if (ptr[j]%2==0){
		  num=ptr[i];
		  ptr[i]=ptr[j];
		  ptr[j]=num;
		  i++;
		  j=i;
		}
		j++;
		
	  }

	  printf("The elements of the array are: ");
	  for (i = 0; i < n; ++i) {
		printf("%d, ", ptr[i]);
	  }
	}