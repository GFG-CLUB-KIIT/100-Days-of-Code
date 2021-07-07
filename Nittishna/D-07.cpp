// Find the difference between the sum of the squares of the first 
// one hundred natural numbers and the square of the sum.
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int SumOfSquares = 0, prod = 1, sum = 0, SquareOfSum = 0, diff = 0;

    for(int i = 1; i <= 100; ++i){
        prod = i*i ;
        SumOfSquares += prod;
    }
    cout << "sum of squares: " << SumOfSquares << endl;
    for (int j = 1; j <= 100; j++){
        sum += j;
    } 
   
    SquareOfSum = sum * sum;
     cout << "square of sum : " << SquareOfSum << endl;  
    diff = SquareOfSum - SumOfSquares;

    cout << "The difference is:" << diff << endl;
    return 0;
}