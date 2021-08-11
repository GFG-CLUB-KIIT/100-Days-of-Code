// WAP to find the standard deviation of 20 numebrs.

#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int main() {
    int i;
    float data[20];
    printf("Enter 20 elements: ");
    for (i = 0; i < 20; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.6f", calculateSD(data));
    return 0;
}

float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 20; ++i) {
        sum += data[i];
    }
    mean = sum / 20;
    for (i = 0; i < 20; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / 20);
}

