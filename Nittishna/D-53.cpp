/* Q3. WAP to swap all the elements in the 1st column with all the corresponding elements in the last column, and 2nd column with the second last column and 3rd with 3rd last etc. of a 2-D dynamic array.  Display the matrix.
*/

#include<stdio.h>
#include<iostream>
using namespace std;
int **allocate (int h, int w){

    int **p;
    int i, j;
    p = (int **) calloc (h, sizeof(int *));
    for(i = 0;i < h; ++i){
        p[i] = (int *) calloc (w, sizeof(int));
    }
    return p;
}

void read_data (int **p, int h, int w){
    int i, j;
    for( i = 0; i < h; ++i){
        for(j = 0; j < w; ++j){
            scanf ("%d", &p[i][j]);
        }
    }
}

void print_data(int **p, int h, int w){
    int i, j;
    for( i = 0; i < h; i++){
        for (j = 0; j < w; ++j)
            printf ("%5d", p[i][j]);
        printf("\n");
    }
}

void swap_data(int **p, int h, int w){
    int i = 0, j = 0, col_count = 0, temp, k = w, l = h; // col_count will increment, n will decrement
    int row, col;
    if(j % 2 == 1){
        while(w-1 != col_count){
            for( i = 0; i < h; ++i){
                temp = p[i][col_count];
                p[i][col_count] = p[i][w - 1];
                p[i][w - 1] = temp;
            }
            col_count++;
            w -=1;
        }
        
        for( row = 0; row < l; row++){
            for (col = 0; col < k; ++col)
                printf ("%d", p[row][col]);
            printf("\n");
        }
    }
    else if(j % 2 == 0){
        while(w != k/2){
            for( i = 0; i < h; ++i){
                temp = p[i][col_count];
                p[i][col_count] = p[i][w - 1];
                p[i][w - 1] = temp;
            }
            col_count++;
            w--;
        }
        for( row = 0; row < l; row++){
            for (col = 0; col < k; ++col)
                printf ("%d", p[row][col]);
            printf("\n");
        }
    }    
}

int main(){
    int **p;
    int M, N;
    printf("Give M and N values: \n");
    scanf("%d%d", &M, &N);
    p = allocate (M, N);
    read_data (p, M, N);
    printf("The 2d array before swapping: \n");
    print_data (p, M, N);
    printf("The 2d array after swapping: \n");
    swap_data(p, M, N);
    return 0;
}