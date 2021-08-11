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

    void add(dist_813 d1, dist_813 d2){
        int finalfeet_813 = d1.feet_813 + d2.feet_813;
        cout << "Resultant dist_813ance is: " << finalfeet_813 << endl;
        int finalinches_813 = d1.inches_813 + d2.inches_813;
        cout << "Resultant dist_813ance is: " << finalinches_813 << endl;
    }
};
int main(){
    dist_813 d1,d2, C3;
    cout << "Enter dist_813ance 1 in feet_813:";
    d1.inputfeet_813();
    cout << "Enter dist_813ance 2 in feet_813:";
    d2.inputfeet_813();
    cout << "Enter dist_813ance 1 in inches_813:";
    d1.inputinches_813();
    cout << "Enter dist_813ance 2 in inches_813:";
    d2.inputinches_813();
    C3.add(d1,d2);
    
    return 0;
}