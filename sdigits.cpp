//get sum of digits of a number
#include<iostream>
using namespace std;

int main()
{
int x;
cout<<"enter a number: ";
cin>>x;
int sum=0;
while(x!=0)
{
sum=sum+ (x%10);
x=x/10;
}
cout<<"sumn of digits= "<<sum<<"\n";
}
