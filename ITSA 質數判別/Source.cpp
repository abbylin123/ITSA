#include <iostream>
using namespace std;

int main()
{
	int n, a, ans;
	cin >> n;  //輸入的值
	ans = 1;   //餘數
	a = 2;     //因為算質數所以從2開始判斷
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