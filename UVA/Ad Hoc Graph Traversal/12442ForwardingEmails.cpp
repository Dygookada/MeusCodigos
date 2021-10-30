#include <bits/stdc++.h>
using namespace std;

#define INF 99999
#define maxn 50050

int n,pes;
vector<int> adj[maxn];
bool vis[maxn],visdfs[maxn];

void dfs( int v)
{
	vis[v]=true;
	visdfs[v]=true;
	int ta=adj[v].size();
	for( int i=0; i<ta; i++)
	{
		if(visdfs[adj[v][i]]==false)
			dfs(adj[v][i]),pes++;
	}
}

int main()
{
	int t,x,y,m,mpes;
	scanf(" %d",&t);
	for( int i=0; i<t; i++)
	{
		scanf(" %d",&n);
		m=0,mpes=0;
		for( int j=0; j<n; j++)
		{
			scanf(" %d%d",&x,&y);
			adj[x-1].push_back(y-1);
		}
		memset ( vis , false , sizeof vis);
		for( int j=0; j<n; j++)
		{
			memset ( visdfs , false , sizeof visdfs);
			pes=0;
			if(vis[j]==false)
				dfs(j);
			
			if(mpes<pes)
				m=j+1,mpes=pes;
		}
		for( int j=0; j<n; j++)
		{
			adj[j].clear();
		}
		printf("Case %d: %d\n",i+1,m);
	}
}
