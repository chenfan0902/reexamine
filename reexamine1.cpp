#include<iostream>
using namespace std;
int main()
{
	cout << "100~300�����У�";
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
	cout << "�����ĸ���Ϊ��" << n<<endl;
	system("pause");
	return 0;
}