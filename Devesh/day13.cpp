//https://practice.geeksforgeeks.org/problems/exactly-3-divisors/1/?track=DSASP-Mathematics&batchId=154

class Solution{
    public:
 #define n 100000
#define ll long long


int sieve(int N)
{
     bool arr[n+1];
    for(ll i=0;i<n+1;i++)
    {
        arr[i]=true;
    }

    arr[0]=false;
    arr[1]=false;

    for(ll i=2;i*i<=n;i++)
    {
        if(arr[i])
        {
        for(ll j=i*i;j<=n;j=j+i)
            {
                arr[j]=false;
            }
        }

    }
    int coun=0;
    for(ll i=1;i*i<=N;i++)
    {
        if(arr[i])
            coun++;
    }
    return coun;
}
    int exactly3Divisors(int N)
    {
        //Your code here
        return sieve(N);
    }
};

