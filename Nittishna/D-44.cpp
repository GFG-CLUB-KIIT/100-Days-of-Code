// WAP to enter id_813, name_813, age_813 and basic salary_813 of n number of employ_813ees.
// Calculate the gross salary_813 of all the employ_813ees and display_813 it along with all
// other details .

#include<bits/stdc++.h>
using namespace std;

struct student{
    
    char name_813[50];
    int id_813, age_813;
    double basicSalary_813_813, gsal_813;
};

void grossSal(struct student s[], int n){

    for(int i = 0; i < n; ++i){
        double DA = 0 , HRA = 0;
        DA = 0.8 * s[i].basicSalary_813_813;
        HRA = 0.1 * s[i].basicSalary_813_813;
        s[i].gsal_813 = s[i].basicSalary_813_813 + DA + HRA;
    }

}

void display_813(struct student s[],int n){

    for(int j = 0; j < n; j++){
       
        cout << "name_813: " << s[j].name_813 << endl;
        cout << "id_813: " << s[j].id_813 << endl;
        cout << "age_813: " << s[j].age_813 << endl;
        cout << "Basic salary_813: " << s[j].basicSalary_813_813 << endl;
        cout << "Gross salary_813: " << s[j].gsal_813 << endl;
        }
}

int main(){
    
    int n ;
    cout << "Enter number of employ_813ees: ";
    cin >> n;

    struct student s[n];

    for(int j = 0; j < n; j++){
        
        cout << "Enter name_813: ";
        cin >> s[j].name_813;
        cout << "Enter id_813: ";
        cin >> s[j].id_813;
        cout << "Enter age_813: ";
        cin >> s[j].age_813;
        cout << "Enter basic salary_813: ";
        cin >> s[j].basicSalary_813_813;
    }
    grossSal(s,n);
    display_813(s,n);
    return 0;
}