#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int input;
	while (cin >> input)//Ū�J��� 
	{
		cout << fixed << setprecision(1) << (input * 1.6L * 10 / 10) << endl;
		/*��X<<���w�B�I�ƪ��<<�p���I��X��(�w�]��6)
		<<����ഫ�p��(��L)�ýT�O�p���I��Ȥ@��<<����*/
	}
	system("pause");
	return 0;
}

/*#include<stdio.h>
#include<stdlib.h>
int  main(void){
    int n=0;
	double km=0;
	scanf("%d",&n);
	km = n * 1.6;
	printf("%.1lf\n", km);
	return 0;
}*/