#include<iostream>
using namespace std;
int main()
{
	int matris[5][5] = { 0, 0, 0, 0,0, 0, 0, 0, 0,0,0, 0, 0, 0,0 ,  0, 0, 0, 0,0 , 0, 0, 0, 0,0 };
	for (int i = 0; i < 5; i++ )
	{
		cout << endl;
		for (int k = 0; k < 5; k++)
		{
			
			if (i == 1 && k == 2)
			{
				matris[1][2] = 1;
			}
			else if (i == 2 && k == 1)
			{
				matris[2][1] = 1;
			}
			else if (i == 3 && k == 2)
			{
				matris[3][2] = 1;
			}
			else if (i == 2 && k == 3)
			{
				matris[2][3] = 1;
			}
			else if (i == 2 && k == 2)
			{
				matris[2][2] = 2;
			}
			cout << matris[i][k] ;
		
		}
	
	}
	




	system("PAUSE");
}
