#include <iostream>
using namespace std;
int main()
{
	int i, fakt = 1;
	cout << "Lutfen bir faktoriyeli alinacak sayiyi giriniz: ";
	cin >> i;
	for (i; i > 1;i--)
	{
		fakt = fakt * i;
	}
	cout <<"Sonuc:"<< fakt << endl;

	system("PAUSE");
	
}
