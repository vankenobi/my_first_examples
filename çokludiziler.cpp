#include<iostream>
using namespace std;

int main()
{
	int sayilar[3][3] = { { 1, 4, 7 }, { 2, 5, 8 }, { 3, 6, 9 } };
	cout << "Dizi elemanlari"<<endl;
	for (int i = 0; i < 3; i++)
	{
		for (int a=0; a < 3;a++)
		{
			cout << "[" << i << "],[" << a << "]:  ";
			cout << sayilar[i][a]<<endl;

		}
	}
	system("PAUSE");
}
