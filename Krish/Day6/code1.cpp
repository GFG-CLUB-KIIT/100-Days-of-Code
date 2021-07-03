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
//-------------------CODE STARTS-------------------------------

    bitset<5001> seg1[4*100005],seg2[4*100005];
    ll a[100005],b[100005];
    void build(int ind,ll low,ll high)
    {
      if(low==high){
        bitset<5001> b1;
        b1.set(a[low]);
        seg1[ind]=b1;
        bitset<5001> b2;
        b2.set(b[low]);
        seg2[ind]=b2;
        return;
      }
      ll mid=(low+high)>>1;
      build(2*ind+1,low,mid);
      build(2*ind+2,mid+1,high);
      //change this acc to need
      seg1[ind]=(seg1[2*ind+1]|seg1[2*ind+2]);
      seg2[ind]=(seg2[2*ind+1]|seg2[2*ind+2]);
    }
  bitset<5001> range1(int ind,ll low,ll high,ll l ,ll r){
    //complete overlap 
    if(low>=l && high<=r)return seg1[ind];
    //no overlap
    if(l>high or low>r){bitset<5001> b1; return b1;}
    //partial overalp
    ll mid=(low+high)>>1;
    bitset<5001> left=range1(ind*2+1,low,mid,l,r);
    bitset<5001> right=range1(ind*2+2,mid+1,high,l,r);
    return (left|right);
  }
    bitset<5001> range2(int ind,ll low,ll high,ll l ,ll r){
    //complete overlap 
    if(low>=l && high<=r)return seg2[ind];
    //no overlap
    if(l>high or low>r){bitset<5001> b1; return b1;}
    //partial overalp
    ll mid=(low+high)>>1;
    bitset<5001> left=range2(ind*2+1,low,mid,l,r);
    bitset<5001> right=range2(ind*2+2,mid+1,high,l,r);
    return (left|right);
  }

void solving()
{
   
   
   int n;
   cin>>n;
   
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
     
   }
   for(int i=0;i<n;i++){
     cin>>b[i];
   }
    build(0,0,n-1);
    ll q;
    cin>>q;
    // cout<<"hell";
    while(q--)
    {
      ll l1,r1,l2,r2;
      cin>>l1>>r1>>l2>>r2;
      bitset<5001> b1=range1(0,0,n-1,l1-1,r1-1);
      bitset<5001> b2=range2(0,0,n-1,l2-1,r2-1);

      b1=b1|b2;
      cout<<(b1.count())<<"\n";

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
