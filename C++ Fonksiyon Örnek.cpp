int karekok()
{
	int  y;
	cout << "Lutfen karekoku alinacak sayiyi yaziniz: ";
	cin >> y;
	double b = sqrt(y);
	cout << b<<endl;
	return 0 ;
}
void main()
{   
	int a;
	cout << "Merhaba Hoşgeldiniz"<<endl;
	cin >> a;
	if ( a == 1 )
	{
		cout << "Merhaba giriş izni verildi."<<endl;
		karekok();
	}

	system("PAUSE");
}
