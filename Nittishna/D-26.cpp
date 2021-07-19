#include<bits/stdc++.h>
using namespace std;
void pattern2(int);

int main(){
    int n = 5;
    pattern2(n);
    
    return 0;
}

void pattern2(int n){

    int k = n - 1;
    for(int i = 0; i < n; i++){ // rows
        for(int j = 0; j < k; j++){ // spaces
            cout << " ";
        }
        k = k - 1;
        for(int j = 0; j < i + 1; j++){ // columns
            cout << "* ";
        }
        cout << endl;
    }
}


