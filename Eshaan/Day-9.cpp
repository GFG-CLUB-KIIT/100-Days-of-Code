#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int N; 
    cin >> N; 
    
    int i, j; 
    
    int sd1 = 0; 
    int sd2 = 0; 
    for(i = 0; i < N; i++){
        for(j = 0; j< N; j++)
        {
           int no; 
           cin >> no; 
           if(i == j)
               sd1 += no; 
           if(i+j == N-1)
              sd2 += no; 
        }
    }
    
    cout << abs(sd1 - sd2);
    return 0;
}