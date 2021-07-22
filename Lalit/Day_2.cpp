// https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
            int n = matrix.size();
            int m = matrix[0].size();

            bool flag = false;

            for(int i=0; i<n; i++)
            {
                int low = 0, high = m-1;

                if(low == high)
                {
                    if(matrix[i][low] == target)
                    {
                        flag = true;
                        break;
                    }
                }

                while(low<high)
                {
                    int mid = (low + high) / 2 ;
                    // cout<<matrix[i][mid]<<" ";
                    if(matrix[i][mid] == target)
                    {
                        flag = true;
                        break;
                    }

                    if(matrix[i][mid] < target)
                    {
                        low = mid + 1;
                    }
                    else
                    {
                        high = mid;
                    }
                }
                if(flag)
                {
                    break;
                }
                if(matrix[i][low] == target)
                {
                    flag = true;
                    break;
                }
            }

        return flag;
    }
};
