#include<iostream>
using namespace std;
int main() {
	int startH = 0, startM = 0, endH = 0, endM = 0,time=0;

	cin >> startH >> startM;  //Ū�J�}�l�ɶ�
	cin >> endH >> endM;   //Ū�J�����ɶ�
	time = (endH * 60 + endM) - (startH * 60 + startM);  //�ন���p��ɼ�
	if (time <= 120&&time>=30) 
	{
		cout << time / 30 * 30 << endl;  //��2�p�ɤ��B�W�L�b�p��
	}
	else if (time<120 && time>-240) 
	{
		cout << (time-120) / 30 * 40+120 << endl;  //�p��W�L2�p�ɥB����4�p��
	}
	else 
	{
		cout << (time-240) / 30 * 60+120+160 << endl;  //�p��W�L4�p��
	}


	system("pasure");
	return 0;
}