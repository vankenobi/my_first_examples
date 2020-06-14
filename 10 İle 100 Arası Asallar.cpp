#include<iostream>
using namespace std;
int sonuc, kalan;
int main()
{

	for (int i = 10; i <= 100; i++)
	{
		if (0 != i % 2 && 0 != i % 3 && 0 != i % 5 && 0 != i % 7 && 0 != i % 11)
		{
			sonuc = i / 10;
			kalan = i % 10;
			if(0 == (kalan + sonuc) % 2)
				cout<<i<<endl;

		}
	}
	system("PAUSE");
}
