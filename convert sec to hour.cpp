#include <iostream>
using namespace std;
int main()
{
	int seconds = 0;
	int hour, min, sec;
	cout << "enter time in seconds" << endl;
	cin >> seconds;
	hour = seconds / 3600;
	min = (seconds%3600) / 60;
	sec = (seconds - (min * 60) - (hour * 3600));
	cout << "Time is: " << hour << " : " << min << " : " << sec  << endl;
	system("pause");
	return 0;
}