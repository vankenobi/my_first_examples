#include<iostream>
using namespace std;

int main()
{
	int as , us;
	cout << "Lutfen bir alt sinir giriniz: ";
	cin >> as;
	cout << "Lutfen bir ust sinir giriniz: ";
	cin >> us;
	for (as; as<us; as++)
	{
		int toplam = 0;
		for (int j = 1; j<as; j++)
		{
			if (as%j == 0)
			{
				toplam = toplam + j;
			}
		}
		if (toplam == as)
		{
			cout << as << endl;
		}
	}
	system("PAUSE");
	return 0;
}
