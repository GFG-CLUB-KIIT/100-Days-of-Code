// https://practice.geeksforgeeks.org/problems/maximum-sum-rectangle2948/1

class Solution {
  public:
  
    int find(int temp[], int &start, int &end, int size)
    {
        int masum=INT_MIN, maxhere=0;
        
        for(int i=0; i<size; i++)
        {
            maxhere += temp[i];
            
            if(maxhere < 0)
            {
                maxhere = 0;
                start = i+1;
                continue;
            }
            
            if(masum < maxhere)
            {
                masum = max(masum,maxhere);
                end = i;
            }
            
        }
        
        
        if(masum != INT_MIN)
        {
            return masum;
        }
        
        masum = temp[0];
        
        for(int i=1; i<size; i++)
        {
            if(temp[i] > masum)
            {
                masum = temp[i];
            }
        }
        
        return masum;
    }
  
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        int temp[R];
        int sum = 0;
        int maxsum = INT_MIN;
        int topleft = -1, topright = -1, bottomleft = -1, bottomright = -1;
        
        for(int i=0; i<C; i++)
        {
            memset(temp,0,sizeof(temp));
            for(int j=i; j<C; j++)
            {
                for(int k=0; k<R; k++)
                {
                    temp[k] += M[k][j];
                }
                
                int start=0, end=0;
                int sum = find(temp,start,end,R);
                // cout<<start<<" "<<end<<" "<<sum<<endl;
                
                if(sum > maxsum)
                {
                    maxsum = max(maxsum,sum);
                }
            }
        }
        
        return maxsum;
    }
};