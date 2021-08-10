#include<bits/stdc++.h>
using namespace std;

class dist_813{
    public:

    int feet_813;
    int inches_813;

    void inputfeet_813(){
        cin >> feet_813;
    }

    void inputinches_813(){
        cin >> inches_813;
    }

    dist_813 add(dist_813 d2){
        dist_813 temp;
        temp.feet_813 = feet_813 + d2.feet_813;
        temp.inches_813 = inches_813 + d2.inches_813;
        return temp;
    }

    
};
int main(){
    dist_813 d1,d2, C3;
    cout << "Enter distance 1 in feet:";
    d1.inputfeet_813();
    cout << "Enter distance 2 in feet:";
    d2.inputfeet_813();
    cout << "Enter distance 1 in inches:";
    d1.inputinches_813();
    cout << "Enter distance 2 in inches:";
    d2.inputinches_813();
    C3 = d1.add(d2);
    cout << "Resultant distance in feet: " << C3.feet_813 << endl;
    cout << "Resultant distance in inches: " << C3.inches_813;
    
    return 0;
}