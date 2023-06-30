//to find largest of 3 numbers using inline function and default arguement concept
#include<iostream>
using namespace std;

class Test 
{
	int x, y, z;
	public:
	void input() 
	{
         	cout << "Enter three numbers: \n";
       		cin >> x >> y>>z;
   	}
   	friend void find(Test t);
};

void find(Test t) 
{
   if (t.x > t.y && t.x > t.z) {
       cout << "Largest is: " << t.x<<endl;
   } else if (t.y > t.z) {
       cout << "Largest is: " << t.y<<endl;
   } else {
       cout << "Largest is: " << t.z<<endl;
   }
}

int main() 
{
   Test t;
   t.input();

   find(t);
   return 0;
}
