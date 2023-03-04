#include<iostream>
using namespace std;
int main() {
	int startH = 0, startM = 0, endH = 0, endM = 0,time=0;

	cin >> startH >> startM;  //讀入開始時間
	cin >> endH >> endM;   //讀入結束時間
	time = (endH * 60 + endM) - (startH * 60 + startM);  //轉成分計算時數
	if (time <= 120&&time>=30) 
	{
		cout << time / 30 * 30 << endl;  //算2小時內且超過半小時
	}
	else if (time<120 && time>-240) 
	{
		cout << (time-120) / 30 * 40+120 << endl;  //計算超過2小時且未滿4小時
	}
	else 
	{
		cout << (time-240) / 30 * 60+120+160 << endl;  //計算超過4小時
	}


	system("pasure");
	return 0;
}