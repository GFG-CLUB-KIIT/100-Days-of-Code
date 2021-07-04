class Solution {
public:
    vector<int> findClosestElements(vector<int>& A, int k, int x) {
       int left = 0, right = A.size() - k;                    // -k  because we dont need to  travel all the elements , we need only a block to check and 
                                                              //find out starting  point of our result array;
        while (left < right) {
            int mid = (left + right) / 2;
            if (x - A[mid] > A[mid + k] - x)                  // finding midpoint more like => 2x > (A[mid]+A[mid+k])/2
                left = mid + 1;                               //if true move one space ahead of mid;
            else
                right = mid;
        }
        return vector<int>(A.begin() + left, A.begin() + left + k); //slicing the array;
        
    }
    
};


// Binary Search
