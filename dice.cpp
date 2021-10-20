#include<iostream>
#include<time.h>

using namespace std;
int main()
{
	int A = 0;
	cout << "Dice roll:" << endl;
	do {

		srand(time(0));
		A = 1 + (rand() % 6);
		cout << "The number is:" <<A<< endl;
	} while (A == 6);
	system("pause");
	return 0;
}