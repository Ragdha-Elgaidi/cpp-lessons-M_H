####################################################################
write a program to do this:
read 5 numbers and sum them up as long as the number is below 50 use for loop and continue statement
input:
10
20
55
10
20
output:
60
####################################################################
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int number = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "enter a number\n";
		cin >> number;
		if (number > 50)
		{
			cout << "the number is greater than 50 and it wont calulated\n";
			continue;
		}
		sum += number;
	}
	cout << sum;
	return 0;
}
