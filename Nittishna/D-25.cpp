#include<bits/stdc++.h>
using namespace std;
void pattern1(int);

int main(){
    int n = 5;
    int a = n + 1;
    pattern1(a);
    return 0;
}

void pattern1(int a){
    int i = 0, j = 0, k = 0;
    while( i < a){
        while(k <= a - i - 2){
            cout << " ";
            k++;
        }
        k = 0;
        while( j < 2 * i - 1){
            cout << "*";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}




