//https://www.hackerrank.com/challenges/funny-string/problem
//HackerRank Day-52

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i =0 ; i< n ;i++)
    {
        string abc;
        cin >> abc;
        int x=abc.length();
        int arr[x];
        for(int j =0 ; j<x ; j++) 
        {
            arr[j]=(int)abc[j];
        }

        // for(int j =0 ; j<x ; j++)
        // cout << arr[j] <<" ";

        int a=x-1;
        int rev[x];
        for(int j=0 ; j<x ; j++)
        rev[j]=arr[a--];

        // cout<<endl;

        // for(int j =0 ; j<x ; j++)
        // cout << rev[j] <<" ";


        int fla=0;
        for(int j =0 ; j<x-1 ; j++)
        {
            if((abs(arr[j]-arr[j+1]))==(abs(rev[j]-rev[j+1])))
            fla=0;
            else
            {
                fla=1;
            break;
            }
        }
        if(fla==1)
        cout << "Not Funny\n";
        else
        cout << "Funny\n";
    }
return 0;
}