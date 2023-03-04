#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int input;
	while (cin >> input)//弄俱计 
	{
		cout << fixed << setprecision(1) << (input * 1.6L * 10 / 10) << endl;
		/*块<<﹚疊翴计ボ<<计翴碭(箇砞6)
		<<俱计锣传计(L)絋玂计翴度<<传︽*/
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