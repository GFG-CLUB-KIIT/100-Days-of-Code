
// Q. Write a function to factorize a given positive integer. 

#include<bits/stdc++.h>
using namespace std;
int factorize(int);
int main(){

    int num;
    cout << "enter positive integer:";
    cin >> num;
    factorize(num);
    return 0;
}

int factorize(int num){

    while(num % 2 == 0){

        cout << 2 << " ";
        num /=2;
    }

    for(int i = 3; i <= sqrt(num) ; i = i + 2){
        while(num % i == 0){
            cout << i << " ";
            num /= i;
        }
    }

    if( num > 2){
        cout << num << endl;
    }

}