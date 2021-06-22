//https://codeforces.com/contest/1472/problem/D

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<ll>());

    queue<ll>alice, bob;
    for(ll i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            alice.push(arr[i]);
        }
        else
        {
            bob.push(arr[i]);
        }
    }

    ll i=0, ac=0, bc=0;
    while(!alice.empty() || !bob.empty())
    {
        i++;

        if(i%2!=0)
        {
            if(alice.size())
            {
                if(alice.front()>bob.front() || bob.size()==0)
                {
                    if(i%2!=0 && !alice.empty())
                    {
                        ac += alice.front();
                        alice.pop();
                        continue;
                    }
                    if(i%2!=0 && alice.empty())
                    {
                        bob.pop();
                        continue;
                    }
                }
                else
                {
                    if(!bob.empty())
                    {
                        bob.pop();
                        continue;
                    }
                }
            }
            else
            {
                if(!bob.empty())
                {
                    bob.pop();
                    continue;
                }
            }
        }

        if(i%2==0)
        {
            if(bob.size())
            {
                if(bob.front()>alice.front() || alice.size()==0)
                {
                    if(i%2==0 && !bob.empty())
                    {
                        bc += bob.front();
                        bob.pop();
                        continue;
                    }
                    if(i%2==0 && bob.empty())
                    {
                        alice.pop();
                        continue;
                    }
                }
                else
                {
                    if(!alice.empty())
                    {
                        alice.pop();
                        continue;
                    }
                }
            }
            else
            {
                if(!alice.empty())
                {
                    alice.pop();
                    continue;
                }
            }
        }
    }


    // cout<<ac<<" "<<bc<<endl;

    if(ac>bc)
    {
        cout<<"Alice"<<endl;
    }
    else if(bc>ac)
    {
        cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Tie"<<endl;
    }

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
