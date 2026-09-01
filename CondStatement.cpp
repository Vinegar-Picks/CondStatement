#include <iostream>
using namespace std;

int main()
{
	double t;
	cout << "Enter the temp in Fahrenheit ==> ";
	cin >> t;
	if (t>=90)
	{
		cout << "It is too HOT!!!" << endl;
	}
	else
	{
		cout << "It is not too hot" << endl;
	}
}

