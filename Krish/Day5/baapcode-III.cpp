/******************************
     AUTHOR KRISH MURARKA
*******************************/
#include<bits/stdc++.h>
using namespace std;
#define ll                 long long int
#define mod                1000000007
#define modulo             998244353
#define popcount           __builtin_popcount     //used to count number of set bits in a integer
#define llpopcount         __builtin_popcountll   
#define parity             __builtin_parity // returns true(1) if number has odd parity i.e odd no of set bits
#define llparity           __builtin_parityll 
#define leadzero           __builtin_clz  //returns number of leading zeros of a 32 bit int 
#define llleadzero         __builtin_clzll // returns number of leading zero of a 64 bit int 
#define trailzero          __builtin_ctz  // returns number of trailing zero 
#define lltrailzero        __builtin_ctzll 
#define f                  first
#define s                  second
#define pb                 push_back
#define popb               pop_back
#define  to_low(s)         transform(s.begin(), s.end(), s.begin(), ::tolower);//convert string to lowercase
#define  to_up(s)          transform(s.begin(), s.end(), s.begin(), ::toupper);//convert string to uppercase
#define inf                (ll)(1e18)
#define rep(i,a,b)         for(int i=a;i<b;i++)
#define pll                pair<ll,ll>
#define ppl                pair<ll,pair<ll,ll>>
#define mem1(a)            memset(a,-1,sizeof(a))
#define mem0(a)            memset(a,0,sizeof(a))
#define maxHeap(T)         priority_queue <T>
#define minHeap(T)         priority_queue <T, vector<T>, greater<T>> 
#define fast               ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define deb(x)             cout<<#x<<" "<<x<<"\n"
#define uid(l,r)           uniform_int_distribution<int>(l,r); // to use auto temp= uid(l,r). int x= temp(rng); to generate from [L,R]
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;} // only use in equations like sum=max(sum,x)  its equivalent ot amax(sum,x) => sums is changed automatically
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 
void read_input()
{
  #ifndef ONLINE_JUDGE
  freopen("inputA.txt","r",stdin);
  freopen("outputA.txt","w",stdout);
  #endif
}
ll flrx[1000005];
ll seg[4*1000005];
unordered_map<ll,ll>freq_right,freq_left;
void build(int ind,ll low, ll high)
{

  //leaf nodes
  if(low==high)
  {
    seg[ind]=flrx[low];
    return;
  }
  ll mid=(low+high)/2;
  build(2*ind+1,low,mid);
  build(2*ind+2,mid+1,high);

  seg[ind]=(seg[2*ind+1]+seg[2*ind+2]);
 
}
void update(int ind,ll low,ll high, int i,ll value)
{
  if(low==high)
  {
   
    seg[ind]-=1;
    flrx[i]=value;
    return;
  }
  ll mid=(low+high)/2;
  if(i<=mid)
  update(2*ind+1,low,mid,i,value);
  else
  update(2*ind+2,mid+1,high,i,value);

  seg[ind]=(seg[2*ind+1]+seg[2*ind+2]);
}
ll sumQuery(int ind,ll low,ll high,ll l,ll r)
{
  if(low>=l && high<=r)return seg[ind];
  if(l>high or low>r)return 0;
  ll mid=(low+high)/2;
  ll left=sumQuery(ind*2+1,low,mid,l,r);
  ll right=sumQuery(ind*2+2,mid+1,high,l,r);
  return left+right;
}
  void pashmak(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
      freq_right[a[i]]++;
      flrx[freq_right[a[i]]]++;
    }
    build(0,0,n);
     
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
      freq_left[a[i]]++;
      update(0,0,n,freq_right[a[i]],flrx[freq_right[a[i]]]-1);
      // for(int i=0;i<n;i++)
      // {
      //   cout<<seg[i]<<" ";  
      // }
      // cout<<"\n";
      freq_right[a[i]]--;
      cnt+=(sumQuery(0,0,n,0,freq_left[a[i]]-1));
    }
    cout<<cnt<<"\n";
  }
void solving()
{
 pashmak();
}
int main()
{
    fast;
    int t=1;
    // cin>>t;
    // read_input();
    for(int i=1;i<=t;i++)
    {  
    //cout<<"Case #"<<i<<": ";
     solving();

    }
   
    return 0;
}
