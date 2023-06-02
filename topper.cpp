/*to define a student class with data members usn,name and marks of 3 subjects 
and member functions to read, display and calculate the avg of best 2 marks
and find who is topper among 'n' no. of students*/

#include<iostream>
using namespace std;

class stud
{
	char usn[10];
	
	float marks[3];
public:
	char name[20];
	float avg;
	void read();
	void calc();
	void disp();

};


void stud::read()
{
	cout<<"Enter USN no.: ";
	cin>>usn;
	cout<<"Enter name of student: ";
	cin>>name;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter marks obtained in subject "<<i+1<<": ";
		cin>>marks[i];
	}
	cout<<endl;
}


		

void stud::calc()
{
	float sum=0, min=marks[0];
	for(int i=0;i<3;i++)
	{
		sum+=marks[i];
		if(min>marks[i])
			min=marks[i];
	}
	avg=float(sum-min)/2;
}

void stud::disp()
{
	cout<<endl<<"Name: "<<name<<endl<<"USN: "<<usn<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Marks obtained in subject "<<i+1<<": ";
		cout<<marks[i]<<endl;
	}
	cout<<"Average of best of 2: "<<avg<<endl<<endl<<"******************************"<<endl;
}



int main()
{
	int n,topper,i;
	char z;

	cout<<"Enter no. of students: ";
	cin>>n;
	cout<<endl;
	stud obj[n];
	
	for(i=0;i<n;i++)
	{	
		cout<<"Enter details of student "<<i+1<<endl;
		obj[i].read();
		obj[i].calc();

	}
	cout<<"******************************"<<endl;
	cout<<"        STUDENT DETAILS       "<<endl;
	cout<<"******************************"<<endl;
	for(i=0;i<n;i++)
	{	
		obj[i].disp();		
	}
	
	topper=obj[0].avg;
	for(i=0;i<n;i++)
	{
		if(topper<obj[i].avg)
		{
			topper=obj[i].avg;	
		}		
	}
	
	cout<<"topper is : "<<topper<<endl<<endl;

	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
