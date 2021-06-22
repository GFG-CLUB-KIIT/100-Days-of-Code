// https://codeforces.com/contest/1/problem/A
    /*    himanshu070    */
    #include <bits/stdc++.h>
    #define ll long long
    #define ld long double
    using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        ll n, m, a, count1, count2;
        cin >> n >> m >> a;
        if(n%a == 0)
            count1 = n/a;
        else count1=n/a+1;
     
        if(m%a == 0)
            count2 = m/a;
        else count2=m/a+1;
     
        cout << count1*count2;
        return 0;
    }