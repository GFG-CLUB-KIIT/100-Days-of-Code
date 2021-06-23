//return the index of the text where pattern matches using Z algorithms

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// bulid z arr
void buildzarr(int *z,string str)
{
    int l=0;
    int r=0;
    int n=str.length();
    for(int i=1;i<n;i++)
    {
      if(i>r)
      {
       l=i;
       r=i;
       while(r<n && str[r-l]==str[r])
       {
        r++;
       }
       z[i]=r-l;
        r--;
      }
      else
      {
       int k=i-l;
       if(z[k]<=r-i)
       {
           z[i]=z[k];
       }
       else
       {
        l=i;
       while(r<n && str[r-l]==str[r])
       {
        r++;
       }
       z[i]=r-l;
        r--;

       }


      }



    }



}

void searchString(string text,string pattern)
{
    string str=pattern + "$" + text;
    int n=str.length();
    int *z=new int[n]();
    buildzarr(z,str);
   /* for(int i=0;i<n;i++)
    {
        cout<<z[i]<<endl;
    }
    */
    for(int i=0;i<n;i++)
    {
    // if length of the pattern is equal to text
        if(z[i]==pattern.length())
        {

            cout<<i-pattern.length()-1<<endl;
        }

    }



}

int main()
{

    string text="abcdsafbcdfasbcda";
    string pattern="bcd";
    searchString(text,pattern);




    return 0;
}
