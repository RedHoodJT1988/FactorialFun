#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
	int num;
	cout << "Please enter a number to get the factorial of: " << endl;
	cin >> num;
	int fact5 = factorial(num);
	cout << "The factorial of " << num << " is: " << fact5 << endl;
	return 0;
}

int factorial(int num)
{
	if (num > 1)
	{
		return num * factorial(num - 1);
	}
	return 1;
}