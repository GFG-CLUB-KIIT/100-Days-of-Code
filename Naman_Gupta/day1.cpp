
// finding n-bit Gray Code

class Solution {
public:
    vector<int> grayCode(int n) {
        
        // if(n<=0)
        // return NULL;
        vector<string> arr;
        vector<int> result;
        
        
        arr.push_back("0");
        arr.push_back("1");
        
        int i,j;
        
        for(int i=2;i<(1<<n)-1;i=i<<1)
        {
            for(j=i-1;j>=0;j--)
            arr.push_back(arr[j]);
            
            for(j=0;j<i;j++)
            {
                arr[j] = "0"+arr[j];
            }
            
            for(j=i;j<2*i;j++)
            {
                arr[j]="1"+arr[j];
            }
            
            
        }
        for(int i =0;i<arr.size();i++)
        {
         int num = stoi(arr[i],0,2);
            result.push_back(num);
            
        }
        return result;
        
    }
};