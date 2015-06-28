#include<iostream>
using namespace std;
int main()
{
	cout << "100~300素数有：";
	int n = 0;
	for (int i = 100; i <= 300; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				cout << i << " ";
				n++;
				break;
			}
		}
	}
	cout << endl;
	cout << "素数的个数为：" << n<<endl;
	system("pause");
	return 0;
}