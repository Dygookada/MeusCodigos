#include <bits/stdc++.h>
using namespace std;

int pieces;
vector<int> adjlist[10001];
bool vis[10001];

void dfs( int v)
{
	if(!vis[v])
		return;
	vis[v]=false;
	pieces++;
	int ta=adjlist[v].size();
	for( int j=0; j<ta; j++)
	{
		int u=adjlist[v][j];
		if(vis[u])
		{
			dfs(u);
		}
	}
}

int main()
{
	//freopen("C:/Users/diogo okada/Desktop/Programinhas_do_Dyogo/UVA/entrada","r",stdin);
	//freopen("C:/Users/diogo okada/Desktop/Programinhas_do_Dyogo/UVA/saida","w",stdout);
	
	int n,m,l,cases,x,y,begins;

	cin>>cases;
	for( int k=0; k<cases; k++)
	{
		cin>>n>>m>>l;
		for( int i=0; i<n; i++)
		{
			vis[i]=true;
			adjlist[i].clear();
		}
		for( int i=0; i<m; i++)
		{
			cin>>x>>y;
			adjlist[x-1].push_back(y-1);
		}
		pieces=0;
		for( int i=0; i<l; i++)
		{
			cin>>begins;
			dfs(begins-1);
		}
		
		cout<<pieces<<endl;
	}
}
