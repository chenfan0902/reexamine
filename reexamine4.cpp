#include<iostream>
using namespace std;

int main()
{
	int A[20] = { 2, 8, 14, 19, 21, 45, 52, 56, 64, 77 };
	int a, b = 0;
	cin >> a;
	
	while (b<10 && a>A[b])
		b++;
	for (int j = 10; j > b; j--)
		A[j] = A[j-1];
	A[b] = a;
	for (int f = 0; f < 11; f++)
		cout << A[f] << " ";

	system("pause");
	return 0;
}