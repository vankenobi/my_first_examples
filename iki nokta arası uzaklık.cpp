
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double sonuc;
	int x1, y1, x2, y2;
	cout << "Lutfen birinci noktanin x degerini giriniz: ";
	cin >> x1;
	cout << "Lutfen birinci noktanin y degerini giriniz: ";
	cin >> y1;
	cout << "Lutfen ikinci noktanin x degerini giriniz: ";
	cin >> x2;
	cout << "Lutfen ikinci sayinin y degerini giriniz: ";
	cin >> y2;
	sonuc = sqrt(pow((x2 - x1),(2)) + pow((y2 - y1),(2)));
	cout << "SONUCUNUZ : ";
	cout << sonuc<<endl;
	

	system("PAUSE");
	
}
