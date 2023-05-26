//to check whether number is even or odd
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter a number: ";
	cin>>n;
	if(n%2==0)
		cout<<n<<" is an even number\n";
	else
		cout<<n<<" is an odd number\n";
	return 0;
}
