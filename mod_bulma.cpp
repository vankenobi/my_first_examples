#include <iostream>

using namespace std;
int main()
{
	
	cout << "\t\t\t Mod Bulma Programi ?\n"; //burada 3 tab boyutunda boşluk bıraktık
	int sayi1, sayi2;
	cout << "Lutfen birinci sayiyi giriniz: "; 
	cin >> sayi1;
	cout << "Lutfen ikinci sayiyi giriniz: ";
	cin >> sayi2;
	int mod = sayi1%sayi2;  //burada % sembolü ile sayi1 sayi2 ye bölünüp kalan söyleniyor
	
	cout << "Sonuc: " << mod<<endl;

	system("PAUSE");
	
}
