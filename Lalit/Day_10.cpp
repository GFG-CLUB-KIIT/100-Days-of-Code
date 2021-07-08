// https://leetcode.com/problems/maximal-square/

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int ma = INT_MIN;
        int n = matrix.size();
        int m = matrix[0].size();
        int one=0;
        
        int mat[n][m];
        
        for(int i=m-1; i>=0; i--)
        {
            mat[n-1][i] = matrix[n-1][i] - '0';
            if(mat[n-1][i] == 1)
            {
                one++;
            }
        }
        
        for(int i=n-1; i>=0; i--)
        {
            mat[i][m-1] = matrix[i][m-1] - '0';
            if(mat[i][m-1] == 1)
            {
                one++;
            }
        }
        
        for(int i=n-2; i>=0; i--)
        {
            for(int j=m-2; j>=0; j--)
            {
                if(matrix[i][j] - '0' == 0)
                {
                    mat[i][j] = 0;
                }
                else
                {
                    mat[i][j] = min({mat[i+1][j],mat[i][j+1],mat[i+1][j+1]}) + 1; 
                    if(mat[i][j]>ma)
                    {
                        ma = max(ma,mat[i][j]);                        
                    }    
                } 
            }               
        }
        
        // for(int i=0; i<n; i++)
        // {
        //     for(int j=0; j<m; j++)
        //     {
        //         cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        if(ma==INT_MIN && one!=0)
        {
            return 1;
        }
        else if(ma==INT_MIN && one==0)
        {
            return 0;
        }
                                
        return ma*ma;
        
    }
};