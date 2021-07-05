//https://www.hackerrank.com/challenges/grading/problem

//HackerRank //Day 14

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mrk[n];
    for (int i =0 ; i<n ; i++)
    {
        cin >> mrk[i];
        if(mrk[i]>37)
        {
            int mm=(((mrk[i]/5)+1)*5);
            if((mm-mrk[i])<3)
            mrk[i]=mm;
        }
    }

    for (int i =0 ; i< n ;i++)
    cout << mrk[i] << endl;
return 0;
}