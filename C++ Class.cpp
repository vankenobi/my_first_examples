#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
class dikdortgen
{
	 char ad[10];
		public:
		
		//constructor// construcctor paramterli de olabilir parametresiz de.
		dikdortgen(char p[])
		{
			strcpy(ad,p);
			cout<<"-----------------------------"<<endl;
			cout<<"paramtreli constructor"<<endl;
			cout<<"parametrem:"<<p<<endl;
			cout<<"-----------------------------"<<endl;
		}
		
		//Destructor
		//destructor parametre almaz.
		~dikdortgen()
		{
			cout<<ad<<" ";
			cout<<"yok edildi."<<endl;
		}
		
};

int main()
{
    {
    	dikdortgen d1("d1");
    {
    	dikdortgen d2("d2");
    }
}
	return 0;
}
