/* Q1. Write a program using C to allocate memory dynamically for 2D array ,read the values and display them using 3 functions separately
I. Keeping no columns fixed and using variable no of rows
II. Keeping no rows fixed and using variable no of columns
III. Using both variable no of rows and columns(use double pointer)

*/ 
#include<bits/stdc++.h>
using namespace std;

void part1();
void part2();
void part3();

int main(){

    cout << "Hello.";
    part1();
    part2();
    part3();

    return 0;
}

void part1(){

    int (*q)[5], rows, i, j;
    printf("enter number of rows: ");
    scanf("%d", &rows);
    q = (int (*)[5]) malloc (rows * 5 * sizeof(int));
    printf("Enter the values to be read: \n");
    for( i = 0; i < rows; ++i){
        for(j = 0; j < 5; ++j){
            scanf("%d", &q[i][j]);
        }
    }
    for( i = 0; i < rows; ++i){
        for( j = 0; j < 5; ++j){
            printf("%d", q[i][j]);
        }
        printf("\n");
    }
}

void part2(){

    int *r[3], i, j, col;
    printf("enter number of columns: ");
    scanf("%d", &col);
    printf("Enter values: ");
    for( i = 0; i < 3; ++i){
        r[i] = (int *) malloc (col*sizeof(int));
        for(j = 0; j < col; ++j){
            scanf("%d", &r[i][j]);
        }
    }  

    for( i = 0; i < 3; ++i){
        for( j = 0; j < col; ++j){
            printf("%d", r[i][j]);
        }
        printf("\n");
    }
}

void part3(){
    int **s, row, column, i, j;
    printf("Enter row and column:\n ");
    scanf("%d%d", &row, &column);
    printf("Enter values:");
    s = (int **) malloc(row*sizeof(int *));
    for( i = 0; i < row; ++i){
        s[i] = (int *) malloc(column*sizeof(int));
        for(j = 0; j <column; ++j){
            scanf("%d", &s[i][j]);
        }
    }

    for(i = 0; i < row; ++i){
        for(j = 0; j < column; ++j){
            printf("%d", s[i][j]);
        }
        printf("\n");
    }

}