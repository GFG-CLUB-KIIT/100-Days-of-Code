/*   When getting into a fitness program, you may want to figure out your target heart rate so you don't overexert yourself.
     The Karvonen heart rate formula is one method you can use to determine your rate. Create a program that prompts for
     your age and your resting heart rate. Use the Karvonen formula to determine the target heart rate based on a range of
     intensities from 55% to 95%. The formula is TargetHeartRate = (((220- age) - resting HR) x intensity) + restingHF
*/

#include<bits/stdc++.h>
using namespace std;

void Karvonen(int, int);

int main(){
    int age = 0; int heart_rate = 0;
    cout <<"enter age : ";
    cin >> age;
    cout << "enter resting heart rate : ";
    cin >> heart_rate;
    Karvonen(age, heart_rate);
    return 0;
}

void Karvonen( int age, int heart_rate){
   
    int TargetHeartRate[8], intensity = 55;
    for( int i = 0; i < 8; i++){
        while(intensity <= 95){
            TargetHeartRate[i] = (((220- age) - heart_rate) * intensity) + heart_rate;
            break;
        }
        intensity += 5;
       
    }
    
    cout << "The Target Heart Rate for different intensities is as follows:" << endl;
    cout << "55" << "\t" << "60" << "\t" << "65" << "\t" << "70" << "\t" << "75" << "\t" << "80" << "\t" << "85" << "\t" << "90" << endl;
    
    for( int i = 0; i < 8; i++){
        cout << TargetHeartRate[i] << "\t";
    }
}

