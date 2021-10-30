#include <bits/stdc++.h>
using namespace std;

#define maxn 210
#define inf 999999

int main()
{
	int T,v,e,f,t;
	vector<int> adj[maxn];
	scanf(" %d",&T);
	for( int k=0; k<T; k++)
	{
		scanf(" %d%d",&v,&e);
		for( int i=0; i<e; i++)
		{
			scanf(" %d%d",&f,&t);
			adj[f].push_back(t);
			adj[t].push_back(f);
		}
		int color[v];
		for( int i=0; i<v; i++)
			color[i]=inf;
		int guardas=0;
		bool isbi=true;
		for( int i=0; i<v; i++)
		{
			int zero=0,um=0;
			queue<int> q;
			if(color[i]==inf)
			{
				q.push(i);
				color[i]=0;
				zero++;
				while(!q.empty() && isbi)
				{
					int vt=q.front(),ta=adj[vt].size();
					q.pop();
					for( int j=0; j<ta; j++)
					{
						int u=adj[vt][j];
						if(color[u]==inf)
						{
							q.push(u);
							color[u]=1-color[vt];
							if(color[u]==0)
								zero++;
							else
								um++;
						}
						else if(color[vt]==color[u])
						{
							isbi=false;
							i=v;
							break;
						}
					}
				}
				if(adj[i].size()==0)
					guardas++;
				else
					guardas+=min(zero,um);
			}	
		}
		for( int i=0; i<v; i++)
			adj[i].clear();
		if(isbi)
			printf("%d\n",guardas);
		else
			printf("-1\n");
	}
}
