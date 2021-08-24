//https://www.hackerrank.com/challenges/fair-rations/problem
//HackerRank Day-61


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 && i > 0 && i < n - 1)
        {
            if (arr[i - 1] % 2 != 0)
            {
                arr[i]++;
                arr[i - 1]++;
                i++;
                c=c+2;
            }
            else
            {
                arr[i]++;
                arr[i + 1]++;
                c=c+2;
            }
        }
    }
    if(c>0)
    cout << c;
    else
    cout <<"NO";
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <math.h>

// using namespace std;

// int main(){
//     int N;
//     cin >> N;

//     vector<int> B(N);

//     for(int B_i = 0;B_i < N;B_i++){
//        cin >> B[B_i];
//     }

//     int i = 0, odd = 0, p = 0, q = 0;

//     while(i<N){
//         if(B[i] % 2 != 0){
//             odd++;          
//             i++;
//      
//             if(odd % 2 == 0){
//                 q += ++p;
//                 p = 0;
//             }

//             while((B[i] % 2 == 0) && (i<N) && (odd % 2 != 0)){
//                 p++;
//                 i++;
//             }
//         }
//         else
//             i++;
//     }

//     if(odd % 2 == 0)
//         cout << 2*q << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }