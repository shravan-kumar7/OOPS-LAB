//find the prime numbers between a given interval

#include <iostream>
using namespace std;

int main()
{
	int a, b, i, j, flag;
	cout << "enter lower limit: ";
	cin >> a;
	cout << "enter upper limit ";
	cin >> b; 
	cout << "Prime numbers between "<< a << " and " << b << " are: \n";
	
	for (i = a; i <= b; i++) 
	{
		if (i == 1 || i == 0)
			continue;
		flag=1;
		for (j = 2; j <= i / 2; ++j) 
		{
			if (i % j == 0) 
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cout << i << " ";
	}

	return 0;
}
