//Find the largest element in an array using DMA.
#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n_813;
    double *p_813;
    printf("Enter the total number of elements: ");
    scanf("%d", &n_813);

    // Allocating memory for n elements
    p_813 = (double *)calloc(n_813, sizeof(double));

    // Storing numbers entered by the user
    for(int i = 0; i < n_813; ++i){
        printf("Enter number %d: ",i + 1);
        scanf("%lf", p_813 + i);// if i = 0, this means in the 0th position of the whole address block.
    }

    // Finding the largest number
    for(int i = 0; i < n_813; ++i){
        if (*p_813 < *(p_813 + i)){
            *p_813 = *(p_813 + i);
        }
    }
    printf("Largest number = %.2lf", *p_813);

    return 0;
}