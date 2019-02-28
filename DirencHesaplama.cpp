#include<iostream> 
#include<cmath>
using namespace std;
int band_1,band_2,band_3,band_4,band_5;

int sonuc;

int bes_bantli(int band_1,int band_2,int band_3,int band_4,int band_5)
{
	
	sonuc = (band_1*100+band_2*10+band_3)*pow(10,band_4);
	cout<<sonuc+sonuc*band_5/100<<"-"<<sonuc-sonuc*band_5/100<<" arasindadir."<<endl;
	
	return sonuc ; 
}
int dort_bandli(int band_1,int band_2,int band_3,int band_4)
{
	
	sonuc = ((band_1*10)+band_2)*pow(10,band_3);
	cout<<sonuc+(sonuc*band_4/100)<<"-"<<sonuc-(sonuc*band_4/100)<<" arasindadir."<<endl;
	return sonuc ;
}
int main()
{       
	    int secim;
		char secim2;
		do{
	    cout<<endl<<endl;
	    cout<<"Renk\t"<<"Sayi\t"<<"Carpan\t"<<"Tolerans\t"<<endl;
		cout<<"Siyah\t"<<"0\t"<<"10^0\t"<<"-\t"<<endl;
		cout<<"Kahve\t"<<"1\t"<<"10^1\t"<<"%1\t"<<endl;
		cout<<"Kirmizi\t"<<"2\t"<<"10^2\t"<<"%2\t"<<endl;
		cout<<"Turuncu\t"<<"3\t"<<"10^3\t"<<"-\t"<<endl;
		cout<<"Sari\t"<<"4\t"<<"10^4\t"<<"-\t"<<endl;
		cout<<"Yesil\t"<<"5\t"<<"10^5\t"<<"%0,5\t"<<endl;
		cout<<"Mavi\t"<<"6\t"<<"10^6\t"<<"%0,25\t"<<endl;
		cout<<"Mor\t"<<"7\t"<<"10^7\t"<<"%0,1\t"<<endl;
		cout<<"Gri\t"<<"8\t"<<"10^8\t"<<"-\t"<<endl;
		cout<<"Beyaz\t"<<"9\t"<<"10^9\t"<<"-\t"<<endl;
		cout<<"Altin\t"<<"-\t"<<"10^(-1)\t"<<"%5\t"<<endl;
		cout<<"Gumus\t"<<"-\t"<<"10^(-2)\t"<<"%10\t"<<endl;
		cout<<endl<<endl<<endl;
		cout<<"1-Dort Bantli direnc"<<endl;
	    cout<<"2-Bes bantli direnc"<<endl<<endl;
		cout<<"Lutfen seciminizi yapiniz: ";
		cin>>secim;
		switch (secim)
		{
		case 1:
			cout<<"Lutfen 1. bandin degerini giriniz: ";
	        cin>>band_1;
	        cout<<"Lutfen 2. bandin degerini giriniz: ";
         	cin>>band_2;
	        cout<<"Lutfen 3. bandin carpanini giriniz: ";
	        cin>>band_3;
	        cout<<"Tolerans degeri giriniz:%";
	        cin>>band_4;
			dort_bandli(band_1,band_2,band_3,band_4);
			break;
		case 2:
			cout<<"Lutfen 1. bandin degerini giriniz: ";
	        cin>>band_1;
	        cout<<"Lutfen 2. bandin degerini giriniz: ";
         	cin>>band_2;
	        cout<<"Lutfen 3. bandin degerini giriniz: ";
	        cin>>band_3;
			cout<<"Lutfen 4. bandin carpanini giriniz: ";
			cin>>band_4;
			cout<<"Tolerans degeri giriniz:%";
			cin>>band_5;
			bes_bantli(band_1,band_2,band_3,band_4,band_5);
			break;
			default:
				cout<<"Yanlis secim yaptiniz . "<<endl;
			break;
		}
		
			
		cout<<"Devam etmek istiyor musunuz ? (E/H): ";
	    cin>>secim2;
		}while(secim2 == 'E' || secim2 == 'e');
system("PAUSE");
}
