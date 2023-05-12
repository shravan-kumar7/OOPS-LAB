//to print multiplication table of a number
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter a number: ";
	cin>>n;
	int i;
	cout<<"Multiplication table of "<<n<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<i<<" * "<<n<<" = "<<i*n<<endl;
	}
	return 0;
}
