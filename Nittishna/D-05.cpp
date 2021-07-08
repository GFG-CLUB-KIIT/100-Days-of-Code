// Q. Find the area of a rectangular room, given its length and breadth in sq meters. Also 
//    the amount of paint required in gallons to cover it.

#include<iostream>
#include<cmath>
using namespace std;

double getArea(double length, double height){
    return length * height;
}

double convertToSqMeter(double area ){
    return area * 0.092903;
}

int getPaint(double area){
    return (int)ceil(area / 350);
}

int main( int argc, char* argv[]){
    if ( argc < 3){
        cout<<"Invalid arguments for area of the room!"<< endl;
        return 0;
    }
    double length = atof(argv[1]);
    double height = atof(argv[2]);

    cout << "The length and height you entered were:"
         << endl << length << " feets and "
         << height << " feets " << endl;

         double area = getArea(length, height);
         cout << "the area is " << convertToSqMeter(area) << " square meters " << endl;
         cout << " amount of paint required " << getPaint(area) << " gallons " << endl;
    return 0;
}