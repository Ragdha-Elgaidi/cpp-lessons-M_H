###################
write a programe to do this :
AA
AB
AD
.
.
.
ZZ
###############
#include <iostream>
using namespace std;
int main()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << "letter:" << char(i) << endl;
		for (int j = 65; j <= 90; j++)
		{
			cout << char(i) << char(j) << endl;
		}
	}
	return 0;

}

#################################
write a program to do this:
**********
*********
********
*******
******
*****
****
***
**
*
#########################################
#include <iostream>
using namespace std;
int main()
{
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*" ;
		}
		cout << "\n";
	}
	return 0;

}
####################################
write a program to do this :
A
AB
ABC
ABCD
ABCDE
ABCDEF
##################################
#include <iostream>
using namespace std;
int main()
{
	for (int i = 65; i <= 70; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(j);
		}
		cout << "\n";
	}
	return 0;

}
