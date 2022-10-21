#include <iostream>
using namespace std;
int ReadIntNumberRange(int from, int to)
{
	int number;
	cout << "please enter the number from " << from << " to " << to << endl;
	cin >> number;
	while (number<from || number>to)
	{
		cout << "the wrong number,";
		cout << "please enter the number from " << from << "to" << to << endl;
		cin >> number;
	}
	return number;
}
int main()
{
	cout <<"valid nnumber is " << ReadIntNumberRange(40, 66) << endl;
}
