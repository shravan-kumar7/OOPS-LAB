//stack using array in C++ (modded with peek function and already given values).
#include <iostream>
using namespace std;

#define max 20
int stack[max];
int top=-1;

void push(int n)
{	
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
		cout<<"Displaying elements:"<<endl;
		for(int i=top;i>-1;i--)
		{
			cout<<stack[i]<<"\n";
		}
	}
}

void peek()
{
	cout<<"top element is "<<stack[top]<<endl;
}

int main()
{
	push(6);
	push(8);
	push(9);
	pop();
	peek();
	push(2);
	display();
	pop();
	pop();
	peek();
	return 0;
	
}	












