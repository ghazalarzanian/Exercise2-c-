#include<iostream>
using namespace std;
int main()
{
	int hour = 0, minute = 0, second = 0;
	int timeinsec = 0;
	cout << "hour?:" << endl;
	cin >> hour;
	cout << "minute?:" << endl;
	cin >> minute;
	cout << "second?:" << endl;
	cin >> second;
	timeinsec = (hour * 60 * 60) + (minute * 60) + second;
	cout << "time in seconds is" << timeinsec<<endl;
	system("pause");
	return 0;
}