#include <bits/stdc++.h>
using namespace std;

vector<int> adjlist[26];
bool vis[26];

void dfs( int v)
{
	vis[v]=false;
	int ta=adjlist[v].size();
	for( int i=0; i<ta; i++)
	{
		int u=adjlist[v][i];
		if(vis[u])
			dfs(u);
	}
}

int main()
{
	//freopen("C:/Users/diogo okada/Desktop/Programinhas_do_Dyogo/UVA/entrada","r",stdin);
	int n,v,graph;
	string aux;
	int a,b;
	cin>>n;
	cin.ignore();
	cin.ignore();
	for( int i=0; i<n; i++)
	{
		getline(cin,aux);
		for( int k=0; k<26; k++)
			vis[k]=true;
		v=aux[0]-'A',graph=0;
		while(getline(cin,aux) && aux.size()==2)
		{
			a=aux[0]-'A',b=aux[1]-'A';
			adjlist[a].push_back(b);
			adjlist[b].push_back(a);
			//cout<<a<<" - "<<b<<endl;
		}
		for( int j=0; j<=v; j++)
			if(vis[j])
				dfs(j),graph++;
		if(i>0)
			cout<<endl;
		cout<<graph<<endl;
		for( int j=0; j<=v; j++)
		{
			/*
			int ta=adjlist[j].size();
			cout<<char (j+'A');
			for( int k=0; k<ta; k++)
				cout<<char(adjlist[j][k]+'A')<<" ";
			cout<<endl;
			*/
			adjlist[j].clear();
		}
	}
}
