#include <iostream>
using namespace std;

int main()
{
	int n, a, ans;
	cin >> n;  //��J����
	ans = 1;   //�l��
	a = 2;     //�]�����ƩҥH�q2�}�l�P�_
	while (a < n)
	{
		if (n % a == 0)
		{
			ans = 0;
		}
		a++;
	}
	if (ans == 1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}