// https://www.hackerrank.com/challenges/box-it/problem
// Hackerrank Day 7

#include<bits/stdc++.h>

using namespace std;
class Box 
{
    private:
    int length, breadth, height;
    public:
    Box() 
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    Box(int l, int b, int h) 
    {
        length = l;
        breadth = b;
        height = h;
    }
    
    Box(const Box &B) 
    {
        length = B.length;
        breadth = B.breadth;
        height = B.height;
    }
    int getLength() 
    {
        return length;
    }
    int getBreadth() 
    {
        return breadth;
    }
   
    int getHeight() 
    {
        return height;
    }

    long long CalculateVolume() 
    {
        return (long long)(breadth) * length * height;
    }
  
    bool operator<(Box &B) 
    {
        if (length < B.length) 
        {
            return true;
        } 
        else if (length == B.length) 
        {
            if (breadth < B.breadth) 
            {
                return true;
            } 
            else if (breadth == B.breadth) 
            {
                if (height < B.height) 
                {
                return true;
                }
            }
        }

        return false;
    }
};
ostream &operator<<(ostream &out, Box &B) 
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}