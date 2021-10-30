#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	int a;
	stringstream aux;
	string n;
	cin>>n;
	a=0;
	int tn=n.size();
	for(int i=0; i<tn; i++)
	{
		a+=n[i]-48;
	}
	aux<<a;
	cout<<aux<<endl;
	n=aux.str();
	cout<<n<<endl;
	a=0;
	tn=n.size();
	for(int i=0; i<tn; i++)
	{
		a+=n[i]-48;
	}
	aux<<a;
	cout<<aux<<endl;
	n="";
	n=aux.str();
	cout<<n<<endl;
}
