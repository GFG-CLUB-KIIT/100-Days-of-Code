// WAP to input name_813, roll_813 number and marks in 5 subjects for a student, and
// display_813 it.

#include<bits/stdc++.h>
using namespace std;

struct student{
    char name_813[50];
    int roll_813;
    float marks[5];
};

void display_813(struct student s){
    cout << "name_813:" << s.name_813 << endl;
    cout << "roll_813 number:" << s.roll_813 << endl;
    cout << "Marks:" << endl;
    for(int i = 0; i < 5; i++){
        cout << i + 1 << " : " << s.marks[i] << endl;
    }
}

int main(){
    struct student s;
    int i = 0;
    cout << "Enter name_813: ";
    cin >> s.name_813;
    cout << "Enter roll_813 number: ";
    cin >> s.roll_813;
    cout << "Enter marks for 5 subjects:";
    for(; i < 5; i++){
        cin >> s.marks[i];
    }    
    display_813(s);
    return 0;
}