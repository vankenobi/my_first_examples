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
node *preloading(node *r)
{
	int counter = 0;
	for(int i=97;i<=122;i++)
	{
		r = add(r,i,counter);
		counter += 1;
	}
	return r;
}
int number_finding(node *r,string str)
{
	node *yrd;
	yrd = r;
	string s;
	while (yrd != NULL)
	{
		s = yrd->char_;
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
string char_finding(node *r,int number)
{
	string s;
	while(r != NULL)
	{
		if(number  == r->number)
		{
			s = r->char_;
			return s;
			break;
		}
	 	r = r->next;
	}
	return 0;
}

string encoding(node *r,string text,int a,int b)
{
	string encode_text;
	int len = text.length();
	for(int i=0;i<len;i++)
	{
		int number = (a*number_finding(r,text.substr(i,1))+b) % 25;
		encode_text += char_finding(r,number);
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
		c = (a*k) % 25;
		if (c == 1)
		{
			c_inv = k; 
		}
	}

	for(int i=0;i<len;i++)
	{
		int x = number_finding(r,str.substr(i,1));
		int number = (c_inv*(x-b))	% 25;
		decode_text += char_finding(r,number);
	}
	return decode_text;

}

void display(node *r)
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

	string text = "mustafa";

	string decode_text;
	string encode_text;

	root = preloading(root);
	encode_text = encoding(root,text,3,2);
	cout<<encode_text<<endl;

	decode_text = decoding(root,encode_text,3,2);
	cout <<decode_text<<endl;
	
	system("Pause");
}
