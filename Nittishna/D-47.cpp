#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real_813;
    int imaginary_813;
    void getdata(){
        cout << "Enter real part: ";
        cin >> real_813;
        cout << "Enter imaginary part: ";
        cin >> imaginary_813;
    }
    void display(){
        cout << "Complex number: " << real_813 << " +/- " << "i" << imaginary_813 << endl;
    }
};

int main(){
    
    Complex C[10];
    for(int i = 0; i < 10; i++){
        C[i].getdata();
    }
    for(int i = 0; i < 10; i++){
        C[i].display();
    }
    return 0;
}