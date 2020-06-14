
#include<iostream>
#include<math.h>
#include<string> //<string> kütüphanesini ekledik.
using namespace std; 
string  isimler[10]; // 10 adet isim tutan bir dizi ekledik.

int  main()
{
	cout << "Lutfen bir isim giriniz: "<<endl; 
	for (int i = 0; i < 10; i++){
		cin >> isimler[i];

	}
	cout << "Girdiginiz isimlerin listesi: "<<endl;
	for (int i = 0; i < 10; i++)
	{
		cout << isimler[i] << endl;
	}
		system("PAUSE");
}
	
