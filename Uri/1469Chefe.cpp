#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef pair<int,int> ii;

vector<int> idade;
vector<int> nome;
vector<bool> vis;
vector<int> adj[510];

map<int,int> chave;

int menor;

int dfs(int v)
{
	int ta=adj[v].size();
	int aux=123456789;
	
	if(ta==0)
		return idade[chave[v]];
	
	for( int i=0; i<ta; i++)
		aux=min(aux,dfs(adj[v][i]));

	
	return min(aux,idade[nome[v]]);
}

int main()
{
	int n,m,ins,x,y,aux;
	char t;
	while( scanf(" %d %d %d",&n,&m,&ins)!=EOF)
	{
		
		for( int i=0; i<n; i++)
		{
			cin>>aux;
			idade.push_back(aux);
			nome.push_back(i);
			chave[i]=i;
		}
		
		for( int i=0; i<m; i++)
		{
			cin>>x>>y;
			adj[y-1].push_back(x-1);
		}
		
		for( int i=0; i<ins; i++)
		{
			cin>>t;
			int a,b;
			if(t=='T')
			{
				cin>>x>>y;
				a=chave[x-1];
				b=chave[y-1];
				aux=idade[a];
				idade[a]=idade[b];
				idade[a]=aux;
				chave[x-1]=b;
				chave[y-1]=a;
			}else
			{
				cin>>x;
				
				if(adj[chave[x-1]].size()==0)
					cout<<"*"<<endl;
				else
					cout<<dfs(x-1)<<endl;
			}
		}
		for( int i=0; i<n; i++)
			cout<<idade[i]<<" ";
	}
}
