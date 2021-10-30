#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	int n,altura,tam,cont;
	string nome,tita,aux;
	scanf(" %d%d",&n,&altura);
	getchar();
	for( int i=0; i<n; i++)
	{
		tita="",cont=0;
		getline(cin,nome);
		stringstream ss(nome);
		while(ss >> aux && aux[0]>60)
		{
			if( cont>0)
			{
				tita+=" ";
			}
			tita+=aux;
			cont++;
		}
		stringstream ss1(aux);
		ss1 >> tam;
		if( tam>altura)
		{
			cout<<tita<<endl;
		}
	}
}
