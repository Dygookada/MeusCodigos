#include <bits/stdc++.h>
using namespace std;

int main()
{
	int c,p,s;
	map< string, int> pessoa;
	map< string, int> questao;
	cin>>c>>p>>s;
	string nome,quest,aux;
	map< string, int> ::iterator it;
	for( int i=0; i<c; i++)
	{
		cin>>nome;
		pessoa[nome]=0;
	}
	int val;
	for( int i=0; i<p; i++)
	{
		cin>>quest>>val;
		questao[quest]=val;
	}
	
	for( int i=0; i<s; i++)
	{
		cin>>nome>>quest>>aux;
		
		if(aux=="AC" && pessoa.count(nome)>0 && questao.count(quest)>0)
			pessoa[nome]+=questao[quest];
	}
	for( it=pessoa.begin(); it!=pessoa.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	
}
