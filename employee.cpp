
/* WAP to read the dara of n employee and compute net salary of each employee using pointer*/
#include<iostream>
using namespace std;
class employee
{
	int id,salary;
	long da, it, net, gross;
	char name[20];
	public:
	void read();
	void display();
	void calc();
};
void employee::read()
{
	cout<<"Enter emplyee ID, name, basic salary: \n";
	cin>>id>>name>>salary;
}
void employee::display()
{
	cout<<"*************************************"<<endl<<"ID: "<<id<<endl<<"Name: "<<name<<endl<<"Basic Salary: "<<salary<<endl<<"DA: "<<da<<endl<<"Gross Salary: "<<gross<<endl
	<<"IT: "<<it<<endl<<"Net Salary: "<<net<<"\n\n";
}
void employee::calc()
{
	da=(0.52)*salary;
	gross=da+salary;
	it=(.3)*gross;
	net=da+salary+it;
}

int main()
{
	int n;
	cout<<"enter no. of employees: ";
	cin>>n;
	employee emp[n],  *p;
	for(int i=0;i<n;i++)
	{
		p=&emp[i];
		p->read();
		p->calc();
	}
	
	for(int i=0;i<n;i++)
	{
		p=&emp[i];
		p->display();
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
