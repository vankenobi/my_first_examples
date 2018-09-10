#include <iostream>
using namespace std;
int main()
{
	int i = 0;
	int a;
	cout << "Kaca kadar sayilarin karesini almak istiyorsunuz: ";
	cin >> a;
	for (; i <= a;)
	{
		cout << i*i << endl;
		i++;
	}
	

	system("PAUSE");
	
}
