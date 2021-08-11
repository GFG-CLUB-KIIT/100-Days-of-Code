// WAP to input name_813, roll_813 number and marks in 5 subjects for n number of
// students. 

#include<bits/stdc++.h>
using namespace std;

struct student{
    
    char name_813[50];
    int roll_813;
    float marks[5], total = 0, perc = 0;
};

void display_813(struct student s[], int n){
    
    for(int i = 0; i < n; i++){
        cout << "name_813:" << s[i].name_813 << endl;
        cout << "roll_813 number:" << s[i].roll_813 << endl;
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
        cout << "total: " << s[i].total << "\t" << "percentage_813_813:" << s[i].perc << endl;
    }
 
}

void disp2(struct student s[], int n){
    
    int roll_813no = 0;
    cout << "enter roll_813 number:";
    cin >> roll_813no;
    for(int i = 0; i < n; i++){
        if(s[i].roll_813 == roll_813no){
            cout << "name_813: " << s[i].name_813 << endl;
            cout << "Total: " << s[i].total << endl;
            cout << "percentage_813_813: " << s[i].perc << endl;
        }
    }
}

void dispRange(struct student s[], int n, int lower, int upper){
    
    for(int i = 0; i < n; i++){
        if(s[i].perc >= lower && s[i].perc <= upper)
            cout << "percentage_813_813 in given range is:" << s[i].perc << endl;
    }
}   

void Array_813Sort(struct student s[], int n){
    
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
        cout << "name_813:" << s[k].name_813 << endl;
        cout << "roll_813 number:" << s[k].roll_813 << endl;
        cout << "Total: " << s[k].total << endl;
        cout << "percentage_813_813: " << s[k].perc << endl;
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
        cout << "Enter name_813: ";
        cin >> s[j].name_813;
        cout << "Enter roll_813 number: ";
        cin >> s[j].roll_813;
        cout << "Enter marks for 5 subjects:";
        for(int i = 0; i < 5; i++){
            cin >> s[j].marks[i];
        }    
    }
    display_813(s,n);
    calc(s,n);
    disp2(s,n);

    int lower = 0, upper = 0;
    cout << "enter lower:";
    cin >> lower;
    cout << "enter upper: ";
    cin >> upper;

    dispRange(s,n, lower, upper);
    Array_813Sort(s,n);
    return 0;
}