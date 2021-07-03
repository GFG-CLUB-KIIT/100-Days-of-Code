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
ll a[200005],seg[4*200005];
void build(int ind,ll low, ll high,int flag)
{

  //leaf nodes
  if(low==high)
  {
    seg[ind]=a[low];
    return;
  }
  ll mid=(low+high)/2;
  build(2*ind+1,low,mid,!flag);
  build(2*ind+2,mid+1,high,!flag);
  // cout<<ind<<" ";
  if(flag==0)
  seg[ind]=(seg[2*ind+1]|seg[2*ind+2]);
  else
    seg[ind]=(seg[2*ind+1]^seg[2*ind+2]);

}
void update(int ind,ll low,ll high,int i,int val,int flag)
{

  if(low==high){ seg[ind]=val;a[i]=val;return;}
  ll mid=(low+high)/2;
  if(i<=mid)
  {
    update(2*ind +1 ,low,mid,i,val,!flag);
  }else update(2*ind +2 ,mid+1,high,i,val,!flag);

  if(flag==0)
  seg[ind]=(seg[2*ind+1]|seg[2*ind+2]);
  else
    seg[ind]=(seg[2*ind+1]^seg[2*ind+2]);

}
// int bit_oor(int ind,int low,int high,int l,int r)
// {
//   if(low>=l && high<=r)return seg[ind];
//   if(l>high or low>r)return 0;

//   int mid=(low+((high-low)/2));
//   int left=bit_oor(ind*2+1,low,mid,l,r);
//   int right=bit_oor(ind*2+2,mid+1,high,l,r);

//   return left|right;
// }
void solving()
{
  int n,m;
  cin>>n>>m;
  ll hello=pow(2,n);
  for(int i=0;i<hello;i++)
  {
    cin>>a[i];
  }  
  int flag=0;
  if(n%2)
  build(0,0,hello-1,0);
  else{
     build(0,0,hello-1,1);
     flag=1;
  }
    
  
  while(m-->0)
  {
    int l,r;
    cin>>l>>r;
    l--;r;
    update(0,0,hello-1,l,r,flag);
    cout<<seg[0]<<"\n";
  }
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
