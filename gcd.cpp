//find GCD of two numbers
#include <iostream>
using namespace std;


int main()
{
	int a,b;
	int gcd;
	cout<<"enter 2 numbers :";
	cin>>a>>b;
	for(int i=1; i<= b; ++i)
	{
	if(a%i==0 && b%i==0)
		gcd=i;
	}
	cout << "GCD of " << a << " and " << b << " is "<< gcd;
	return 0;
}

