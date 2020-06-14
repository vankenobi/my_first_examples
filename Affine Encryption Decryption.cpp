#include <iostream>  
#include <stdlib.h>
#include <string>	//String işlemler için string kütüphanesini eklememiz gerekti.
using namespace std;



// Encryption   E( x ) = ( a x + b ) mod m
// Decryption   D( x ) = a^-1 ( x - b ) mod m

struct node
{
	char char_;
	int number;
	node *next;
};

node *add(node *r,char char_,int number) 
{
	if(r == NULL)
	{
		r = new node;
		r->char_ = char_;
		r->number = number;
		r->next = NULL;
	}
	else
	{
		node *yrd;
		yrd = r;
		while(yrd->next != NULL)
			yrd = yrd->next;
		yrd->next = new node;
		yrd->next->char_ = char_;
		yrd->next->number = number;
		yrd->next->next = NULL;
		yrd = NULL;
		delete yrd;
	}
	return r;
}
node *preloading(node *r) // preloading fonksiyonu ile harfleri listeye aktarıyoruz ve liste başını döndürüyoruz.
{
	int counter = 0;	//sayıcı harflere indis değerlerinin atılması için gerekli
	for(int i=97;i<=122;i++)
	{
		r = add(r,i,counter);
		counter += 1;
	}
	return r;
}
int number_finding(node *r,string str) // Numara bulma fonksiyonu gelen harfin indis değerini liste içerisinden bulup döndürür.
{									  
	node *yrd;	
	yrd = r;
	string s;	//Char tipindeki liste elemanını string veriye dönüştürürken kullanıyoruz.
	while (yrd != NULL)
	{
		s = yrd->char_; // char --> string
		if (s == str)	
		{
			return yrd->number;
			break;
		}
		yrd = yrd->next;
	}
	yrd = NULL;
	delete yrd;
	return 0;
}
string char_finding(node *r,int number)	//gelen indis değerinin karşılığı olan karakteri bulup döndürür.
{
	string s;
	while(r != NULL)
	{
		if(number  == r->number)
		{
			s = r->char_;	//char --> string
			return s;
			break;
		}
	 	r = r->next;
	}
	return 0;
}

string encoding(node *r,string text,int a,int b)	//gelen texti y = ax+b formülüne göre şifreler
{
	string encode_text;		 // şifrelenmiş text
	int len = text.length(); // gelen textin boyutunu len değişkenine atadım.
	for(int i=0;i<len;i++)	 
	{
		int number = (a*number_finding(r,text.substr(i,1))+b) % 25; //substr metodu string içerisinde hareket etmemizi sağlar.
		encode_text += char_finding(r,number);	//şifrelenen her indis için liste içerisinde hangi harfe denk geldiğini bulur ve encode_text değişkenine aktarır.
	}
	return encode_text;
}

string decoding(node *r,string str,int a,int b)
{
	int len = str.length();
	string decode_text;
	int c_inv;	
	int c;
	for (int k=0;k<25;k++)
	{
		c = (a*k) % 25;			//decoding için bir sabit bulmamız gerekiyor.
		if (c == 1)
		{
			c_inv = k;			//bu sabit c_inv değişkenine aktarılıyor.
		}
	}

	for(int i=0;i<len;i++)
	{
		int x = number_finding(r,str.substr(i,1));	//gelen şifrelenmiş texti harflerinin numaralarını liste içerinden bulur ve x değişkenine atar.
		int number = (c_inv*(x-b))	% 25;			// formül c_inc*(x-b) mod n
		decode_text += char_finding(r,number);		//karakter bulma fonksiyonu ile girdisi gerçekleşen numara değerine karşılık gelen karakter döndürülür ve decode_text
	}												//text değişkenine atılır.
	return decode_text;

}

void display(node *r)	//Display fonksiyonu ile alfabenin çıktısını alıyoruz.
{
	while(r != NULL)
	{
		cout<<"Char: "<<r->char_<<"Number: "<<r->number<<endl;
		r = r->next;
	}
	system("Pause");
}

int main()
{
	node *root;
	root = NULL;

	string text = "asdfghjkls";	

	string decode_text;
	string encode_text;

	root = preloading(root);
	encode_text = encoding(root,text,3,2);
	cout<<encode_text<<endl;

	decode_text = decoding(root,encode_text,3,2);
	cout <<decode_text<<endl;
	
	system("Pause");
}
