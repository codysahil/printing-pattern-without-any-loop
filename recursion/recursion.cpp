#include<iostream>
using namespace std;

void printPattern(int n)
{
	if (n == 0 || n < 0) {
		cout << n << " ";
		return;
	}
	cout << n << " ";
	printPattern(n - 5);
	cout << n << " ";
}
int main()
{
	int n = 16;
	printPattern(n);
	return 0;
}