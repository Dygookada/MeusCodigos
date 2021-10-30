#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
#define inf 999999
#define f first
#define s second

int main()
{
	int g,n,e,t,m,x,y,tp,dist[110],mice;
	vector<ii> adj[110];
	scanf(" %d",&g);
	for( int k=0; k<g; k++)
	{
		if(k>0)
			printf("\n");
		scanf(" %d%d%d%d",&n,&e,&t,&m);
		for( int j=0; j<m; j++)
		{
			scanf(" %d%d%d",&x,&y,&tp);
			adj[y-1].push_back(ii(x-1,tp));
		}
		priority_queue< ii, vector<ii>, greater<ii> >q;
		for( int j=0; j<n; j++)
			dist[j]=inf;
		mice=0;
		q.push(ii(0,e-1));
		dist[e-1]=0;
		while(!q.empty())
		{
			ii v=q.top();
			q.pop();
			int tam=adj[v.s].size();
			for( int i=0; i<tam; i++)
			{
				ii u=adj[v.s][i];
				if(dist[u.f]>dist[v.s]+u.s)
				{
					dist[u.f]=dist[v.s]+u.s;
					q.push(ii(dist[u.f],u.f));
				}
			}
		}
		for( int i=0; i<n; i++)
		{
			adj[i].clear();
			if(dist[i]<=t)
				mice++;
		}
		printf("%d\n",mice);
	}
}
