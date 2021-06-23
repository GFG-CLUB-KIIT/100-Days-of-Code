// Question Link: https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1#
class Solution
{
public:
    void printTillN(int n)
    {
        if(n==1){cout<<"1"<<" ";}
   else
   {

      printTillN(n-1);
      cout<<n<<" ";
   }
    }
};
