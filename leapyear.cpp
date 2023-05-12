//to check whether given year is leap year or not
#include<iostream>
using namespace std;

int main()
{
int y;
cout<<"enter a year: ";
cin>>y;
if((y%4==0)||(y%400==0&&y%100==0))
	cout<<y<<" is a leap year\n";
else
	cout<<y<<" is not a leap year\n";
return 0;
}

