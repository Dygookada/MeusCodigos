#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> ii;
#define INF 123456789
#define fi first
#define se second

int n;
vector< ii> adj[10010];
bool vis[10010];

long long dfs( int v)
{
	int ta = adj[v].size();
	
	if(ta==0 || !vis[v])
		return 1;
	vis[v] = false;
	long long soma=1;
	for( int i=0; i<ta; i++)
		if(adj[v][i].se%2==1)
			soma*=dfs(adj[v][i].fi)*adj[v][i].se;
	return soma;
}

int main()
{
	int m,a,b,c;
	while(cin>>n>>m)
	{
		long long res=1;
		for( int i=0; i<m; i++)
		{
			scanf(" %d%d%d",&c,&a,&b);
			if(c%2==1)
				res *= c;
		}
		cout<<res<<endl;
	}
}	
