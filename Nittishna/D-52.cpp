#include<bits/stdc++.h>
using namespace std;

class bankAccount{
    
    public:
    
    char name_813[50];
    int acc_no;
    char acc_type[50];
    double acc_bal;

    void assign_ini_val(){
        
        cout << "enter name: ";
        cin >> name_813;
        cout << "Enter account number: ";
        cin >> acc_no;
        cout << "Enter acc_type: ";
        cin >> acc_type;
    }

    void deposit(){
        
        double deposit;
        cout << "Enter amount to deposit: ";
        cin >> deposit;
        acc_bal += deposit;
    }

    void withdraw(){
        //bankAccount r;
        double withdraw;
        cout << "account balance is: " << acc_bal << endl;
        cout << "Enter amount to withdraw: ";
        cin >> withdraw;
        acc_bal -= withdraw;
    }

    void display_813(){
        //bankAccount q;
        cout << "name: " << name_813 << endl;
        cout << "Balance is: " << acc_bal << endl;
    }
};

int main(){

    bankAccount E;
    E.assign_ini_val();
    E.deposit();
    E.withdraw();
    E.display_813();
    return 0;
}