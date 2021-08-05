class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
         int res=0;
         int lmax[n];
    int rmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],arr[i]);
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rmax[i]=max(rmax[i+1],arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        res=res+(min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
    }
};