// Problem Link:  https://practice.geeksforgeeks.org/problems/smallest-subarray-with-all-occurrences-of-a-most-frequent-element2258/1#

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    
    public:
    class Pair{
        public:
        int start, end, freq;
        Pair(int start, int end, int freq){
            this->start = start;
            this->end = end;
            this->freq = freq;
        }
    };
    vector<int> smallestSubsegment(int arr[], int n)
    {
    	// Complete the function
    	vector<int>result;
        unordered_map<int, Pair*>mymap;
        int max_ = INT_MIN;
        for(int i=0; i < n; i++){
            if(mymap.count(arr[i])== 0){
                Pair* newpair = new Pair(i, i, 0);
                mymap[arr[i]] = newpair;
            }
            else{
                mymap[arr[i]]->freq +=1;
                mymap[arr[i]]->end = i;
            }
            max_= max(max_, mymap[arr[i]]->freq);
        }
        int start = INT_MAX, end = INT_MIN, element = -1, size = INT_MAX;
        for(auto i: mymap){
            if(i.second ->freq == max_){
                if(size > (i.second->end - i.second->start)){
                    size = i.second->end - i.second->start;
                    start = i.second->start;
                    end = i.second->end;
                    element = i.first;
                }
                else if(size == (i.second->end - i.second->start)){
                    if(start > i.second->start){
                        start = i.second->start;
                        end = i.second->end;
                        element = i.first;
                    }
                }
            }
        }	
        for(int i = start; i<=end; i++){
            result.push_back(arr[i]);
        }
        return result;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    vector<int > v;
	    Solution ob;
	    v = ob.smallestSubsegment(a, n);
	    for(int i:v)
	        cout<< i << " ";
	    cout<<"\n";
	}
return 0;
}
  // } Driver Code Ends