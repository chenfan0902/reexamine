#include<iostream>
using namespace std;

int main()//比较数组
{
	int A[] = { 13, 45, 2, 5, 78, 9, 6, 40, 43 };
	int B[] = { 13, 45, 2, 6, 8, 9, 37, 40, 43 };
	for (int i = 0; i < 9; i++)
	{
		if (A[i] != B[i])
			cout << "第" << i + 1 << "位置" << A[i] << "和" << B[i] << "不一样！" << endl;
	}
	system("pause");
	return 0;
}