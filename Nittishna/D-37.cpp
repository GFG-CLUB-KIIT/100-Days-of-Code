// WAP in 'c' to read and print the details of 72(n = 5) CS student details using DMA(roll,age,cgpa,sub)
#include <stdio.h>
#include <stdlib.h>
struct student{

    char age;
    char subject[30];
    int roll;
    float cgpa;
};

int main(){
    
    struct student *stud;
    int n, i;
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    stud = (struct student *)malloc(n * sizeof(struct student));
   
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %3d:\n", i + 1);
        printf("Enter age: ");
        scanf("%d", &(stud + i)->age);
        printf("Enter subject name: ");
        scanf("%s", (stud + i)->subject);
        printf("Enter roll number: ");
        scanf("%d", &(stud + i)->roll);
        printf("Enter cgpa: ");
        scanf("%f", &(stud + i)->cgpa);
    }
    printf("\nEntered details are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%30s \t %30s \t %5d \t %.2f\n", (stud + i)->age, (stud + i)->subject, (stud + i)->roll, (stud + i)->cgpa);
    }
    return 0;
}
