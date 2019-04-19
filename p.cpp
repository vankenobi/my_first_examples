#include <iostream>
#include <fstream>

using namespace std;
class kayit
{
	public:
	string isim;
	string soyisim;
	string urun;
	string tarih;
	string garantisuresi;
	string servis ;
	
};

kayit p;
int main()
{
	int secim1;
	char secim2;
	cout<<"\t\t\t\tBeyaz Esya Sirketi Otomasyonu"<<endl;
	do
	{
	cout<<"1-Ekle"<<endl<<"2-Sil"<<endl<<"3-Ara"<<endl<<"4-Duzenle"<<endl;
	cout<<"Lutfen seciminizi yapiniz:";
	cin>>secim1;
switch(secim1)
	{
		case 1 :
			ofstream dosyayaz("kayit.txt");
			cout<<"Lutfen isim giriniz:";
			cin>>p.isim;
			cout<<"Lutfen soyisim giriniz:";
			cin>>p.soyisim;
			cout<<"Lutfen urun giriniz:";
			cin>>p.urun;
			cout<<"Lutfen urunun alindigi tarihi giriniz(g/a/y):";
			cin>>p.tarih;
			cout<<"Lutfen urunun garanti suresini giriniz:";
			cin>>p.garantisuresi;
			cout<<"Servis durumu giriniz:";
			cin>>p.servis;
		 	dosyayaz<<p.isim<<"\t"<<p.soyisim<<"\t"<<p.urun<<"\t"<<p.tarih<<"\t"<<p.garantisuresi<<"\t"<<endl;
	    	break;
	    	 
		case 2 :
		cout<<"su anda bos";
			break;
	    case 3:
	    	cout<<"Su anda bos";
			break;
		case 4:
		    cout<<"Su anda bos";	
			break;
			
		default:
				cout<<"Yanlis secim yaptiniz.Tekrar secim yapmak istermisiniz (E/H) ?:";
				cin>>secim2;
			break;
	}
	dosyayaz.close();
  }while(secim2 =='E' || secim2 == 'e');
	return 0;
}
