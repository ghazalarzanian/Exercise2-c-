#include<iostream>
using namespace std;
int main()
{
	int Temp = 0;
	float A=0,Avg=0,Max=0,Min=20,score=0;
	string name, lastname;
	cout << "enter number of students:" << endl;
	cin >> Temp;
	for (int i = 0;i < Temp;i++) {
		cout << "enter score of studet number" << i + 1 << ":" << endl;
		cin >> score;
		Avg += score;
		if (score > Max)
			Max = score;
		if (score < Min)
			Min = score;
		score = 0;
	}
	A = Avg / Temp;
	cout << "The average is " << A << endl;
	cout << "The min score is:" << Min<<endl;
	cout << "The max score is:" << Max<<endl;
	system("pause");
	return 0;
}