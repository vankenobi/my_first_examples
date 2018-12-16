                                ************//Pointerlar************ 
                                
                                
#include<iostream>
using namespace std;

int main()
{
	int a = 5;
	int *ptr = &a;

	cout <<"degeriniz : "<< &a << endl;
	cout << "degeriniz : " << ptr<<endl;
	cout << "degeriniz : " << *ptr << endl;
	*ptr = 6;
	cout << "a nin yeni degeri : " << a<<endl;



	system("PAUSE");
}                      
