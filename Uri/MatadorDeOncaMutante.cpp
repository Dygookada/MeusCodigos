#include <bits/stdc++.h>
using namespace std;

#define maxn 100010

int n,k,orgao;
vector<int> adj[maxn];
bool vis[maxn];

void dfs(int veneno, int vert)
{
	if(veneno>=k)
		return;
	vis[vert]=true;
	orgao++;
	int ta=adj[vert].size();
	for( int i=0; i<ta; i++)
	{
		int u=adj[vert][i];
		if(vis[u]==false)
			dfs(veneno+1,u);
	}
}

int main()
{
	int	a,b;
	cin>>n>>k;
	for( int i=0; i<n; i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for( int i=0; i<n; i++)
	{
		orgao=0;
		dfs
	}
	
