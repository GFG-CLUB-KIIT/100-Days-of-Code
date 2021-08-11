/* Q2. Let A be nXn square dynamic matrix. WAP by using appropriate user defined functions for the following:
a. Find the number of nonzero elements in A
B. Find the sum of the elements above the leading diagonal.
C. Display the elements below the minor diagonal.
D. Find the product of the diagonal elements.
*/


#include<stdio.h>
#include<stdlib.h>

int non_zero(int ***ptr,int n){
    int nonzero=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((((*ptr)+i)+j)!=0){
                nonzero++;
            }
            //printf("%d ",(((*ptr)+i)+j));
        }
        //printf("\n");
    }
    return nonzero;

}

int diag_sum(int ***ptr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
                sum += **(((*ptr)+i)+j);
            }
        }
    }
    return sum;
}

void below_diag(int ***ptr,int n){
    printf("\nArray below diag: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                printf("%d ",(((*ptr)+i)+j));
            }
        }
        printf("\n");
    }
}

int diag_product(int ***ptr,int n){
    int prod=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i){
                prod *= **(((*ptr)+i)+j);
            }
            if(i+j == n-1){
                prod *= **(((*ptr)+i)+j);
            }
        }
    }
    return prod;
}

void main()
{
    int **arr;
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d",&n);
    arr = (int **)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        arr[i] = (int*)malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element for row %d column %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int nonzero = non_zero(&arr,n);
    printf("\nThe number of non-zero element in the array: %d",nonzero);
    int sum_lead_diag = diag_sum(&arr,n);
    printf("\nThe sum of elements above diagonal %d ",sum_lead_diag);
    below_diag(&arr,n);
    int diag = diag_sum(&arr,n);
    printf("\nThe product of diagonal elements is: %d ",diag);
    
    
    
    
    free(arr);
}