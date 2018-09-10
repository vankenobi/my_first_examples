#include <iostream>
using namespace std;
int main()
{
	int mod;
	int sayi;
	cout << "Lutfen bir sayi giriniz: ";
	cin >> sayi;
	mod = sayi % 2;
	cout << "Sonuc:";
	(mod == 0) ? cout << "sayi cift\n" : cout << "Sayi tek\n";
	

	system("PAUSE");
	
}
