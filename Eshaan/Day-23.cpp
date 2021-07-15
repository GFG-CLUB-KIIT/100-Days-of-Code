//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
//Codeforces Day 23

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0 ; i<n ; i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        int a=abs(z-x);        
        int b=abs(z-y);  
        //cout << a << b;
        if(a>b)
        cout << "Cat B" << "\n";
        else if (a<b)
        cout << "Cat A" << "\n";
        else
        printf("Mouse c");      
    } 
return 0;
}
