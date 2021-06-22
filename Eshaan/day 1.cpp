#include <iostream>
#include <string>
using namespace std;

int main()
{

//Enter test case;
int t;  // must be even
cin>>t;

for(int i =0 ; i<t ; i++)
{
    string st;
    cin>> st;
    int c=1;
    
     //extract
     for(int i=0 ; i<st.size(); i++)
     {
         char c= st[i];
         if(c=='A')
            st[i]='(';
        else if (c=='B')
             st[i]=')';
        else
            st[i]=')';
     }
     if(st[0]==st[st.size()-1])
     {
       c=0;
       goto one;
     }

     c=1;
     for(int i =0 ; i<st.size() && c>0 ; i++)
     {
         
         char c = st[i];
         if (c=='(')
            c++;
          else if (c==')')
            c--;
         
         
     }
     one:
     if(c==1)
        cout<<"YES\n";
     else
         cout<<"NO\n";
}


return 0;
}






