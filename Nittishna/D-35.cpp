// WAP in 'C' to dynamicallyallocate member while using malloc or calloc to store N numbers entered by the user and display all the numbers and the average of numbers.

#include <stdio.h>
#include <malloc.h>
 
int main(){
	
	int i, n_813, sum_813 = 0;
	int *a_813;
	float avg_813 = 0;
 
    printf("Enter the size of array A: \n");
	scanf("%d", &n_813);
 
    a_813 = (int *) malloc(n_813 * sizeof(int));
 
    printf("Enter Elements of the List: \n");
	for (i = 0; i < n_813; i++) {
		scanf("%d", a_813 + i);
	}
 
    for (i = 0; i < n_813; i++){
		sum_813 = sum_813 + *(a_813 + i); 
        /* this *(a+i) is used to access the value stored at the address*/
	}
	
	avg_813 = sum_813 / n_813;

    printf("Sum of all elements in array = %d\n", sum_813);
	printf("Average of all the elements in array = %f\n",avg_813);
    return 0;
}