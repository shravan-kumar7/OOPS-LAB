//simple calculator
#include <iostream>
using namespace std;
int main()
{
float a,b,c;
char op;

cout<<"enter number 1: ";
cin>>a;
cout<<"enter number 2: ";
cin>>b;
cout<<"enter operator: ";
cin>>op;
switch(op)
{
case '+': c=a+b;
break;
case '-': c=a-b;
break;
case '*': c=a*b;
break;
case '/': c=a/b;
break;
default: cout<<"wrong operator";
break;
}
cout<<"Answer = "<<c<<"\n";
return 0;
}
