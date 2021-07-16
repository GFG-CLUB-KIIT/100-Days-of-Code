/*
Problem - WAP exhibiting Tower of Hanoi.
Author - Abhinav Deep
Date - July 16,2021
*/

#include<stdio.h>

void TOH(int, char, char, char);

int main(){
    int n;
    printf("Enter no. of disks in rod A : "), scanf("%d",&n);
    TOH(n, 'A', 'C', 'B');
    return 0;
}

void TOH(int n, char from, char to, char extra){
    if(n==1){
        printf("Disk 1 from %c to %c.\n",from,to);
        return;
    }
    TOH(n-1,from, extra, to);
    printf("Disk %d from %c to %c.\n",n,from,to);
    TOH(n-1, extra, to, from);
    return;
}

