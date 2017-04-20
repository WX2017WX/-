#include<iostream>
using namespace std;
int main()
{
	int a1 = 1, a2 = 1,k;
	cout << "输入斐波那契数列的项数k：" << endl;
	cout << "k=";
	cin >> k;
	if (k == 1 || k == 2)
	{
		cout << 1 << endl;
	}
	else
	{
		int sum;
		for (int i = 0;i < k - 2;++i)
		{
			sum = a1 + a2;
			a1 = a2;
			a2 = sum;
		}
		cout << "a" <<k<<"="<<a2<< endl;
	}
	return 0;
}