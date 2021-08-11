#include<bits/stdc++.h>
using namespace std;

class coordinate{
    public:
    int x_813 , y_813;
    double calc(coordinate p, coordinate q){
        double dis = sqrt((p.x_813 - q.x_813) * (p.x_813 - q.x_813) + (p.y_813 - q.y_813) * (p.y_813 - q.y_813));
        return dis;
    }

};

int main(){
    coordinate p, q, dist_813;
    cout << "Enter x_1 coordinate: ";
    cin >> p.x_813;
    cout <<"Enter y_1 coordinate: ";
    cin >> p.y_813;
    cout << "Enter x_2 coordinate: ";
    cin >> q.x_813;
    cout <<"Enter y2 coordinate: ";
    cin >> q.y_813;
    cout << "distance between both points is: " << dist_813.calc(p,q) << endl;  
    return 0;
}