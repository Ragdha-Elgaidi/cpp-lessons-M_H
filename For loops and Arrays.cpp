#include <iostream>
using namespace std;
void ReadArrayData(int array[100], int& lenght)
{
	cout << "How many numbers do you want to enter ?from 1 to 100" << endl;
	cin >> lenght;
	for (int i = 0; i <= lenght - 1; i++)
	{
		cout << " please enter the number" << i + 1 << endl;
		cin >> array[i];
	}
}
void PrintArrayData(int array[100], int lenght)
{
	for (int i = 0; i <= lenght - 1; i++)
	{
		cout << "The number" << i + 1 << "is " << array[i] << endl;
	}
}
int calculateArraySum(int array[100], int lenght)
{
	int sum = 0;
	for (int i = 0; i <= lenght - 1; i++)
	{
		sum += array[i];
	}
	return sum;
}
int main()
{
	int array[100], lenght = 0;
	ReadArrayData(array, lenght);
	PrintArrayData(array, lenght);
	int sum = calculateArraySum(array, lenght);
	cout << "################################################" << endl;
	cout << "Sum" << sum<<endl;
	cout << "Average" << sum / lenght << endl;
	return 0;
}
