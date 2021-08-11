
#include<bits/stdc++.h>
using namespace std;

struct student{
    
    char name[50];
    int roll;
    float marks[5], total = 0, perc = 0;
};

void display(struct student s[], int n){
    
    for(int i = 0; i < n; i++){
        cout << "Name:" << s[i].name << endl;
        cout << "Roll number:" << s[i].roll << endl;
        cout << "Marks:" << endl;
        for(int j = 0; j < 5; j++){
            cout << j + 1 << " : " << s[i].marks[j] << endl;
        }
    }
}

void calc(struct student s[], int n){

    for (int i = 0; i < n; i++){ 
        int sum = 0;
        for(int j = 0; j < 5; j++)
            sum = sum + s[i].marks[j];
        s[i].total = sum;
        s[i].perc = sum / 5;
        cout << "total: " << s[i].total << "\t" << "percentage:" << s[i].perc << endl;
    }
 
}

void disp2(struct student s[], int n){
    
    int rollno = 0;
    cout << "enter roll number:";
    cin >> rollno;
    for(int i = 0; i < n; i++){
        if(s[i].roll == rollno){
            cout << "Name: " << s[i].name << endl;
            cout << "Total: " << s[i].total << endl;
            cout << "Percentage: " << s[i].perc << endl;
        }
    }
}

void dispRange(struct student s[], int n, int lower, int upper){
    
    for(int i = 0; i < n; i++){
        if(s[i].perc >= lower && s[i].perc <= upper)
            cout << "percentage in given range is:" << s[i].perc << endl;
    }
}   

void ArraySort(struct student s[], int n){
    
    struct student temp;
    
    for(int i = 0; i < n; ++i){
        for(int c = i + 1; c < n; c++){
            if(s[i].total > s[c].total){
                temp = s[i];
                s[i] = s[c];
                s[c] = temp;
            }
        }
    }

    for(int k = 0; k < n; k++){
        cout << "Name:" << s[k].name << endl;
        cout << "Roll number:" << s[k].roll << endl;
        cout << "Total: " << s[k].total << endl;
        cout << "Percentage: " << s[k].perc << endl;
        cout << "Marks:" << endl;
        for(int j = 0; j < 5; j++){
            cout << j + 1 << " : " << s[k].marks[j] << endl;
        }
    }
}

int main(){
    
    int n ;
    cout << "Enter number of students: ";
    cin >> n;

    struct student s[n];

    for(int j = 0; j < n; j++){
        cout << "Enter name: ";
        cin >> s[j].name;
        cout << "Enter roll number: ";
        cin >> s[j].roll;
        cout << "Enter marks for 5 subjects:";
        for(int i = 0; i < 5; i++){
            cin >> s[j].marks[i];
        }    
    }
    display(s,n);
    calc(s,n);
    disp2(s,n);

    int lower = 0, upper = 0;
    cout << "enter lower:";
    cin >> lower;
    cout << "enter upper: ";
    cin >> upper;

    dispRange(s,n, lower, upper);
    ArraySort(s,n);
    return 0;
}