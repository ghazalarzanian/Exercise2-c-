#include<iostream>
#include <sstream>
using namespace std;
int main()
{
	string number;
	int Sum=0;
	string A="continue";
	cout << "You have to enter numbers unless you enter exit" << endl;
	while(true)
	{
		cout << "enter number:\n";
		cin >> number;
		if (number == "exit") {
			cout << "Total sum of the numbers is " << Sum << endl;
			break;
		}
		else {
			int num=stoi(number);
			Sum += num;
		}

	} 
	system("pause");
	return 0;

}