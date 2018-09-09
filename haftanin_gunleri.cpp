#include <iostream>
using namespace std;
int main()
{
	char harf;
	cout << "A,B,C,D,E harflerinden birini giriniz: ";
	cin >> harf;
	if (harf == 'A'){
		cout << "bugun gunlerden pazartesi.\n";
	}
	else if (harf == 'B'){
		cout << "bugun gunlerden sali."<<endl;
	}
	else if (harf == 'C'){
		cout << "bugun gunlerden carsamba.\n"<<endl;
	}
	else if (harf == 'D'){
		cout << "bugun gunlerden persembe.\n";
	}
	else if (harf == 'E'){
		cout << "bugun gunlerden cuma.\n"<<endl;
	}
	else{
	
		cout << "bugun haftasonu."<<endl;
	}




	

	system("PAUSE");
	
}
