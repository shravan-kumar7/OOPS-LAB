//factorial of a number
#include <iostream>
using namespace std;

int factorial(int n)
{
if(n==1||n==0)
	return 1;
else
	return n*factorial(n-1);
}

int main()
{
int x;
cout<<"enter a number: ";
cin>>x;
cout<<"factorial of "<<x<<" is "<<factorial(x)<<"\n";
return 0;
}

