#include<iostream>
using namespace std;

int main()//�Ƚ�����
{
	int A[] = { 13, 45, 2, 5, 78, 9, 6, 40, 43 };
	int B[] = { 13, 45, 2, 6, 8, 9, 37, 40, 43 };
	for (int i = 0; i < 9; i++)
	{
		if (A[i] != B[i])
			cout << "��" << i + 1 << "λ��" << A[i] << "��" << B[i] << "��һ����" << endl;
	}
	system("pause");
	return 0;
}