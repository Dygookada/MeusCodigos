
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef pair<int,int> ii;
#define fi first
#define se second

vector<int> nome;
vector<bool> vis;
vector<int> adj[510];

map<int,int> chave;

int menor;

int dfs( int idade[],int v)
{
	int ta=adj[v].size();
	int aux=123456789;
	
	if(ta==0)
		return 0;
	
	for( int i=0; i<ta; i++)
		aux=min(aux,dfs(idade,adj[v][i]));

	
	return min(aux,idade[v]);
}

int main()
{
	int n,m,ins,x,y,aux;
	char t;
	while( scanf(" %d %d %d",&n,&m,&ins)!=EOF)
	{
		int idade[n];
		int fulano[n];//tem o cargo x
		int cargo[n];//tem o fulano y
		for( int i=0; i<n; i++)
		{
			cin>>aux;
			idade[i]=aux;
			fulano[i]=i;
			cargo[i]=i;
		}
		
		for( int i=0; i<m; i++)
		{
			cin>>x>>y;
			adj[y-1].push_back(x-1);
		}
		
		for( int i=0; i<ins; i++)
		{
			cin>>t;
			if(t=='T')
			{
				cin>>x>>y;
				int aux = fulano[x-1];
				fulano[y-1] = fulano[x-1];
				fulano[x-1] = aux;
				aux = cargo[fulano[x-1]];
				cargo[fulano[x-1]] = cargo[fulano[y-1]];
				cargo[fulano[y-1]] = aux;
				
			}else
			{
				cin>>x;
				
				if(adj[cargo[fulano[x-1]]].size()==0)
					cout<<"*"<<endl;
				else
					cout<<dfs(idade,cargo[fulano[x-1]])<<endl;
			}
		}
		for( int i=0; i<n; i++)
			cout<<idade[i]<<" ";
	}
}

