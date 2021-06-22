#include <iostream>

using namespace std;

void towerOfHanoi(int n,char src,char dest, char help){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,src,help,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,help,dest,src);
}

/*
4
|
3   |   |
|
2   |   |
|
1   |   |
---------
sr  hl  ds
*/

int main(){
    int n;
    cin>>n;

    towerOfHanoi(n,'A','C','B');

    return 0;
}