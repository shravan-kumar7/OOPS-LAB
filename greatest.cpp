//to find largest of 3 numbers using inline function and default arguement concept
#include<iostream>
using namespace std;

inline int greatest(int x,int y,int z)
{
    if(x>y)
    {
    	if(x>z)
    		return x;
    	else
    		return z;
    }
    else
    {
    	if(y>z)
    		return y;
    	else
    		return z;
    }
}
int main()
{
    int a,b,c;
    cout<<"enter three numbers:"<<endl;
    cin>>a>>b>>c;
    cout<<"Largest number is "<<greatest(a,b,c)<<endl;
    return 0;
}
