#include <iostream>
#include <stdlib.h> 
#include <fstream>
#include <time.h> 
using namespace std;
int dizi[10]={11,125,145,187,142,16,17,146,758,123};

int main()
{
	double sonuc;
	int sayaci=0,sayacu=0;
	int sayac = 0;
	int sayilar[10];
	int sayi;
    ofstream dosya("bilgi.txt");
    for(int i=0;i<10;i++)
    dosya<<dizi[i]<<endl;
	dosya.close();
	ifstream dosyaoku("bilgi.txt");
	while(dosyaoku>>sayi)
	{
		sayilar[sayac] = sayi;
		sayac++;
	}
	for(int i=0;i<10;i++)
	{
		sonuc = 0;
		sonuc = sayilar[i]/100;
		(sonuc<1)?sayaci++:sayacu++;
	}
	cout<<"iki basamakli sayi adedi: "<<sayaci<<endl;
	cout<<"uc basamakli sayi adedi: "<<sayacu<<endl;
	return 0;
}
