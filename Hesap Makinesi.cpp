#include <iostream>
using namespace std;
int main()
{
	int islem, x, y;
	cout << "birinci sayiyi giriniz:  ";
	cin >> x;
	cout << "İkinci sayiyi giriniz: ";
	cin >> y;

	cout << "Bir islem seciniz..."<<endl;
	cout << "1-Toplama"<<endl;
	cout << "2-Cikarma"<<endl;
	cout << "3-Carpma"<<endl;
	cout << "4-Bolme"<<endl;
	cout << "secilen islem: ";
	cin >> islem;

	switch (islem){
	case 1:
		cout << "Sonuc: " << x + y<<endl;
		break;
	case 2:
		cout << "Sonuc: " << x - y<<endl;
		break;
	case 3:
		cout << "Sonuc: " << x*y<<endl;
		break;
	case 4:
		cout << "Sonuc: " << x / y<<endl;
		break;
	default:
		cout << "girdiğiniz sayiya uygun bir islem bulunamadı"<<endl;
	
	
	}

	system("PAUSE");
	
}
