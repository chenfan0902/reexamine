#include<iostream>
using namespace std;

int main()
{
	long a,b,c=0;
	cin >> a;
	b = a;
	while (b)
	{
		c = c * 10 + b % 10;
		b = b / 10;
	}
	if (a == c)
		cout << a << "�ǻ�������" << endl;
	else
		cout << a << "���ǻ�������" << endl;
	system("pause");
	return 0;
}