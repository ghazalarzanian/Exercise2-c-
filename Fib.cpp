#include<iostream>
using namespace std;
int fib(int n)
{
	if (n < 2 )
		 return n;
	 return fib(n - 1) + fib(n - 2);
}
int main() {
	int num=0;
	cout << "enter the number of fib that you want to make:" << endl;
	cin >> num;
	for(int i=1;i<=num;i++)
	{
		cout << fib(i)<<"      " ;
	}
	system("pause");
	return 0;
}