#include<iostream>
using namespace std;

int main() 
{
	int x[2][2], y[2][2], z[2][2];
	
	for (int i = 0; i < 2; i++)
	{
		for (int a = 0; a < 2;a++)
		{
			cout << "X matrisi" << i << "-" << a << " : ";
			cin >> x[i][a];
		}
	
	}


	for (int i = 0; i < 2;i++)
	{
		for (int a = 0; a < 2;a++)
		{
			cout << "Y matrisi" << i << "-" << a << " : ";
			cin >> y[i][a];
		}
	}
	for (int i = 0; i < 2;i++)
	{
		for (int a = 0; a < 2;a++)
		{
			z[i][a] = x[i][a] + y[i][a];
		}
	}
	cout << " \n\n";
	for (int i = 0; i < 2;i++)
	{
		for (int a = 0; a < 2;a++)
		{
			cout << z[i][a]<<endl;
		}
	}
	system("PAUSE");
	return 0;
}
