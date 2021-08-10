#include<bits/stdc++.h>
using namespace std;

class details{

    public: 
    char name_813[20];
    int roll_813;
    float marks[5];
    float tot_marks;
    float percentage_813_813;

    void getdata(){
       
        cout << "Enter name_813: ";
        cin >> name_813;
        cout << "Enter roll_813 number: ";
        cin >> roll_813;
        cout << "Enter marks of 5 subjects (out of 100): ";
            for(int j = 0; j < 5; j++){
        cin >> marks[j];
    } 

    }
    void display_813(){
        cout <<"name_813: " << name_813 << endl;
        cout <<"roll_813 number: " << roll_813 << endl;
        int tot = 0;
        for(int i = 0; i < 5; i++){
            tot = tot + marks[i];
        }
        cout << "Total marks: " << tot << endl;
        percentage_813_813 = tot / 5;
        cout << "percentage_813_813: " << percentage_813_813 << endl;
    }
};



int main(){

    details student;
    student.getdata();
    student.display_813();
    return 0;
}