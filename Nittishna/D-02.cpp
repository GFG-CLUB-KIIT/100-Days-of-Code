
/* Q. Write a function that finds the sum of all the unique numbers 
      in the array of integers given as argument to it.
*/


#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;
int howMany(int, vector<int>);
int sumUnique(vector<int>);

int main(int argc, char* argv[]){
    vector<int> nums;
    for (int i = 0; i < argc; ++i){
        nums.push_back(atoi(argv[i]));
    }
    cout << sumUnique(nums) << endl;
    return 0;
}

int sumUnique(vector<int> v){
    int sum = 0;
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        if (howMany(*it, v) == 1){
            sum += *it;
        }
    }
    return sum;
}

int howMany(int what, vector<int> where){
    int occurs = 0;
    for (vector<int>::iterator it = where.begin(); it != where.end(); ++it) {
        if (*it == what) {
            ++occurs;
        }
        
    }
    return occurs;
}
