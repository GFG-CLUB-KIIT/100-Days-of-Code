#include<bits/stdc++.h>
using namespace std;

class student{
    
    public :
    char name_813[50];
    int id_813, age_813;
    double basicSalary_813, gsal_813;

    
    void grossSal(student s[], int n){

        for(int i = 0; i < n; ++i){
            double DA = 0 , HRA = 0;
            DA = 0.8 * s[i].basicSalary_813;
            HRA = 0.1 * s[i].basicSalary_813;
            s[i].gsal_813 = s[i].basicSalary_813 + DA + HRA;
        }
    }

    void display(student s[], int n){

    for(int j = 0; j < n; j++){
       
        cout << "name_813: " << s[j].name_813 << endl;
        cout << "id_813: " << s[j].id_813 << endl;
        cout << "age_813: " << s[j].age_813 << endl;
        cout << "Basic salary_813: " << s[j].basicSalary_813 << endl;
        cout << "Gross salary_813: " << s[j].gsal_813 << endl;
        }
    }
};


int main(){
    
    int n ;
    cout << "Enter number of employees: ";
    cin >> n;

    student s[n];

    for(int j = 0; j < n; j++){
        
        cout << "Enter name_813: ";
        cin >> s[j].name_813;
        cout << "Enter id_813: ";
        cin >> s[j].id_813;
        cout << "Enter age_813: ";
        cin >> s[j].age_813;
        cout << "Enter basic salary_813: ";
        cin >> s[j].basicSalary_813;
    }
    s[n].grossSal(s,n);
    s[n].display(s,n);
    return 0;
}