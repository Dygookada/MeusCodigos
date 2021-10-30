#include <bits/stdc++.h>
using namespace std;

struct burro
{
	string nome;
	int pontos,vitorias,gols,ind;
	
};
bool compare( burro a, burro b)
{
	if(a.pontos>b.pontos)
		return true;
	if(a.pontos==b.pontos)
	{
		if(a.vitorias>b.vitorias)
			return true;
		if(a.vitorias==b.vitorias)
		{
			if(a.gols>b.gols)
				return true;
			if(a.ind<b.ind)
				return true;
		}
	}
	return false;
}

int main()
{
	int t;
	cin>>t;
	for( int k=0; k<t; k++)
	{
		int n,m;
		cin>>n>>m;
		map<string,int> nome;
		burro tabela[n];
		string aux,a,b;
		for( int i=0; i<n; i++)
		{
			cin>>aux;
			nome[aux]=i;
			tabela[i].ind=i;
			tabela[i].nome=aux;
			tabela[i].pontos=0;
			tabela[i].vitorias=0;
			tabela[i].gols=0;
		}
		int x,y;
		for( int i=0; i<m; i++)
		{
			cin>>x>>a>>y>>b;
			tabela[nome[a]].gols+=x;
			tabela[nome[b]].gols+=y;
			if(x>y)
			{
				tabela[nome[a]].pontos+=3;
				tabela[nome[a]].vitorias++;
			}else if(x==y)
			{
				tabela[nome[a]].pontos++;
				tabela[nome[b]].pontos++;
			}else
			{
				tabela[nome[b]].pontos+=3;
				tabela[nome[b]].vitorias++;
			}
		}
		sort(tabela,tabela+n,compare);
		for( int i=0; i<n; i++)
		{
			cout<<tabela[i].nome<<endl;
			//printf(" %dP %dV %dG\n",tabela[i].pontos,tabela[i].vitorias,tabela[i].gols);
		}
	}		
}
