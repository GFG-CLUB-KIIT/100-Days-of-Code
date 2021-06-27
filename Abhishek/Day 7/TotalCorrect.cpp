
// https://www.codechef.com/START5C/problems/TOTCRT

#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define int long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define endl "\n"
#define sp(n) fixed<<setprecision(n)
#define countBits(x) __builtin_popcount(x)
#define ctz(x) __builtin_ctz(x)// no. of unset bits before first setBit
typedef pair<int, int>  pii;
typedef vector<int>    vi;
typedef vector<pii>    vpii;
typedef vector<vi>    vvi;
const int mod = 1'000'000'007;
//=======================



void solve() {
  int n;
  cin>>n;
  map<string, int > m;
    fo(j,3)
    {
      fo(i,n)
      {
      string s;int v;
      cin>>s>>v;
      if(m.find(s)==m.end())
      {
        m[s]=v;
      }
      else{
        m[s]+=v;
      }
      }
    }
    multiset<int> mark;
   for(auto x:m)
   {
    mark.insert(x.ss);
   }
   for(auto x: mark)
   {
    cout<<x<<" ";
   }
   cout<<endl;

    
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}