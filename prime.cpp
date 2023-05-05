//check whether a number is prime or not
#include <iostream>
using namespace std;
int main() 
{
	int n, i, prime=1;
	cout<<"Enter a positive integer: ";
	cin>>n;
	if (n==0||n==1)
	{
		cout<<"Neither prime nor composite\n";
		exit(0);
	}
	for (i=2;i<=n/2;++i) 
	{
		if (n%i==0) 
			prime=0;
	}
	if (prime==1)
		cout<<"It is a prime number\n";
	else
		cout<<"It is not a prime number\n";
	return 0;
}
