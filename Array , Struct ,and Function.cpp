#include <iostream>
#include <string>
using namespace std;
struct strinfo
{
	string FirstName;
	string LastName;
	int Age;
	string PhoneNumber;
};
void ReadInfo(strinfo& info)
{
	cout << "Enter the firstname\n";
	cin >> info.FirstName;
	cout << "Enter the last name\n";
	cin >> info.LastName;
	cout << "Enter the age\n";
	cin >> info.Age;
	cout << "Enter the phone number\n";
	cin >> info.PhoneNumber;
}
void PrintInfo(strinfo info)
{
	cout << "**************************************************\n";
	cout << "First name: " << info.FirstName << endl;
	cout << "Last name: " << info.LastName<< endl;
	cout << "Age :" << info.Age << endl;
	cout << "Phone Number" << info.PhoneNumber << endl;
	cout << "****************************************************\n";
}
void ReadPersonInfo(strinfo persons[100], int& NumberOfPersons)
{
	cout << "How many persons?\n ";
	cin >> NumberOfPersons;
	for (int i = 0; i <= NumberOfPersons; i++)
	{
		cout << "Enter the persons'" << i + 1 << "info :" << endl;
		ReadInfo(persons[i]);
	}
}
void PrintPersoninfo(strinfo persons[100], int NumberOfPersons)
{
	for (int i = 0; i <= NumberOfPersons - 1; i++)
	{
		cout<<"persons'"<<i+1<<"info"<<endl;
		PrintInfo(persons[i]);
	}
}
int main()
{
	strinfo Persons[100];
	int NumberOfPersons = 0;
	ReadPersonInfo(Persons, NumberOfPersons);
	PrintPersoninfo(Persons, NumberOfPersons);
	return 0;
}
