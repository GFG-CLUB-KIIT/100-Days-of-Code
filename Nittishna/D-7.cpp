#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int SumOfSquares = 0, prod = 1, sum = 0, SquareOfSum = 0, diff = 0;

    for(int i = 1; i <= 10; ++i){
        prod = i*i ;
        SumOfSquares += prod;
    }
    cout << "sum of squares: " << SumOfSquares << endl;
    for (int j = 1; j <= 10; j++){
        sum += j;
    } 
   
    SquareOfSum = sum * sum;
     cout << "square of sum : " << SquareOfSum << endl;  
    diff = SquareOfSum - SumOfSquares;

    cout << "The difference is:" << diff << endl;
    return 0;
}