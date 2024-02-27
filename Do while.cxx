#include<iostream>
using namespace std;
int main()
{
	char b='c';
	do
	{
		int a;
		cout <<"Enter a number :";
		cin >> a;
		cout << a*10 <<"\n";
	}
	while(b!=0);
	return 0;
}
