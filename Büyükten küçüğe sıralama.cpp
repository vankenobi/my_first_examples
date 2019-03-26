#include <iostream>
#include <stdlib.h> 
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
	int dizi[10];
   srand(time(NULL));
   for(int i=0;i<10;i++)
   {
   	dizi[i] = rand()%90+10;
   }
   for(int j=0;j<10;j++)
   {
   	for(int k=0;k<10;k++)
	   {
	   	if(dizi[j]<dizi[k])
		   {
		   	swap(dizi[j],dizi[k]);
		   }
	   }
   }
	for(int i=0;i<10;i++)
	{
		cout<<dizi[i]<<" ";
	}
	return 0;
}
