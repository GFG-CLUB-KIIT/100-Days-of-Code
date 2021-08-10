//WAP to reverse contents of a dynamic array of 'N' elements.

#include <stdio.h> 
#include <stdlib.h>
int main(void){

//declare variables
int i; //loop counter
int count; //integer amount from user
int j = 0; int k = 0;

// read in integer count from user
printf("enter the amount of numbers: ");
scanf("%d", &count);

// declare pointer 
int *number = malloc(sizeof(int)*count);
int *evens = malloc(sizeof(int)*count);
int *odds = malloc(sizeof(int)*count);

// declare variable
//int odds_count = 0;
//int evens_count = 0;

//loop to read in numbers from user
for (i=0; i<count; i++){
    printf("enter number %02d: ",i+1);
    scanf("%d",(number+i));
    printf("you entered %d\n", *(number+i)); //--- entered values are correct here
    if (*(number+i)% 2 ==0){
        *(number+i) = *(evens+j);
        j++;
        //evens_count++;
    } else {
        *(number+i) = *(odds+k);
        k++;
    }
    printf("you entered %d\n", *(number+i));  //---entered values become 0
}
//print array elements
printf("\nEntered array elements are:\n");
for(i=count;i>0;i--)
{
    printf("%d ",*(number+i));
}
printf("\n");

// print out even numbers
printf("even numbers: ");
for (i=0;i<j;i++){
    printf("%5d",*(evens+i));
}
printf("\n");

// print out odd numbers
printf("odd numbers: ");
for (i=0;i<k;i++){
    printf("%5d",*(odds+i));
}
printf("\n");

return 0;
}

