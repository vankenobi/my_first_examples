#include<iostream>
#include<time.h>
using namespace std;
void fak(int sayi);
int main()
{
	int c;
	cout << "Lutfen bir sayi giriniz: ";
	cin >> c;
    fak(c);
	system("PAUSE");
}
void fak(int sayi){
	int toplam = 1;
	for (int i = 1; i <= sayi; i++)
	{
		toplam = toplam *i;
	}
	cout << toplam<<endl;
}
