//https://www.hackerrank.com/challenges/time-conversion/problem
//HackerRank
//Day 10

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char tm[12] = "\0\0\0\0\0\0\0\0\0\0\0";
    int hr=0;
    
    scanf("%s", tm);
    
    if(tm[8] == 'P'){
        hr = 10*(tm[0]-'0')+(tm[1]-'0');
        if(hr < 12) hr += 12;
    }
    else{
        hr = 10*(tm[0]-'0')+(tm[1]-'0');
        if(hr == 12) hr = 0;
    }
    
    tm[0] = hr/10 + '0';
    tm[1] = hr%10 + '0';
    tm[8] = '\0';
    tm[9] = '\0';
    
    printf("%s", tm);
    return 0;
}
