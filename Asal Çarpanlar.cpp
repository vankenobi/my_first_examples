#include<iostream>
using namespace std;
int sayi;
int r;
int i=0;
int  main()
{
	cout << "Lutfen bir sayi giriniz: ";
	cin >> sayi;
	switch (1)
	{
	case 1:
		if (0 == sayi % 2)
			cout << "2,";
	case 2:
		 if (0 == sayi % 3)
			cout << "3,";
	case 3:
		 if (0 == sayi % 5)
			cout << "5,";
    case 4:
	     if (0 == sayi % 7)
			cout << "7,";
	case 5:
		if (0 == sayi % 11)
			cout << "8,";
	case 6:
		if (0 == sayi % 13)
			cout << "13,";
	case 7:
		if (0 == sayi % 17)
			cout << "17,";
	case 8:
		if (0 == sayi % 19)
			cout << "19,";
	default:
			break;
			

	}
	system("PAUSE");
}
