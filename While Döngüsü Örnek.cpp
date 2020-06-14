#include <iostream>
using namespace std;
int main()
{
	int sayi; 
	cout << "Lutfen bir sayi giriniz: ";
	cin >> sayi;
	switch (sayi){
	case 1: 
		cout << "OCAK"<<endl;
		break;
	case 2 :
		cout << "SUBAT"<<endl;
		break;
	case 3 :
		cout << "MART"<<endl;
		break;
	case 4 :
		cout << "NISAN"<<endl;
		break;
	case 5:
		cout << "MAYIS"<<endl;
		break;
	case 6 :
		cout << "HAZIRAN"<<endl;
		break;
	case 7 :
		cout << "TEMMUZ"<<endl;
		break;
	case 8: 
		cout << "AGUSTOS"<<endl;
		break;
	case 9: 
		cout << "EYLUL"<<endl;
		break;
	case 10 :
		cout << "EKIM"<<endl;
		break;
	case 11:
		cout << "KASIM"<<endl;
		break;
	case 12:
		cout << "ARALIK"<<endl;
		break;
	default :
		cout << "Herhangi bir ay bulunamadi"<<endl;
	
	
	
	}



	

	system("PAUSE");
	
}
