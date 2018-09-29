#include<iostream>
using namespace std;
int num1=1, num2 = 1,toplam = 0, r;

int  main()
{
	cout << "Lutfen pozitif bir sayi giriniz: ";
	cin >> r;
	cout <<"Fibonacci Series:"<<endl<<toplam <<endl<<num1<<endl<<num2<<endl;
	toplam = num1 + num2;

	while (toplam<=r)
	{
		cout << toplam << endl;
		num1 = num2;
		num2 = toplam;
		toplam = num1 + num2;

	}
	
	
	system("PAUSE");
}
