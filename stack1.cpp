//stack using array in C++
#include <iostream>
using namespace std;

#define max 20
int stack[max];
int top=-1;

void push()
{	
	int n;
	cout<<"enter a number ";
	cin>>n;
	if(top==max-1)
	{
		cout<<"Stack overflow\n";
	}
	else
	{
		top++;
		stack[top]=n;
		cout<<"Value "<<n<<" inserted\n";
	}
}

void pop()
{
	if(top==-1)
		cout<<"stack underflow\n";
	else
	{
		cout<<stack[top]<<" deleted successfully\n";
		top--;
	}
}

void display()
{
	if(top==-1)
		cout<<"stack underflow\n";
	else
	{
		for(int i=top;i>-1;i--)
		{
			cout<<stack[i]<<"\n";
		}
	}
}


int main()
{
	int choice;

	while(1)
	{
		cout<<"\n***MENU***\n1.push 2.pop 3.display 4.exit\n";
		cout<<"enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
			default: cout<<"invalid choice\n";
				 break;
		}
	}
}	


























