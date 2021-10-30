#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

#define inf 9999999

int main()
{
	int N,n,m,s,t,x,y,w;
	vector<ii> adjlist[20050];
	scanf(" %d",&N);
	for( int k=0; k<N; k++)
	{
		scanf(" %d%d%d%d",&n,&m,&s,&t);
		for( int j=0; j<m; j++)
		{
			scanf(" %d%d%d",&x,&y,&w);
			adjlist[x].push_back(ii(y,w));
			adjlist[y].push_back(ii(x,w));
		}
		vector<int> dist(n,inf);
		dist[s]=0;
		priority_queue <ii, vector<ii>, greater <ii> >pq;
		pq.push(ii(0,s));
		while(!pq.empty())
		{
			ii f=pq.top();
			pq.pop();
			int d=f.first,u=f.second,ta=adjlist[u].size();
			if(d>dist[u])
				continue;
			for( int i=0; i<ta; i++)
			{
				ii v=adjlist[u][i];	
				if(dist[u]+v.second<dist[v.first])
				{
					dist[v.first]=dist[u]+v.second;
					pq.push(ii(dist[v.first],v.first));
				}
			}
		}
		if(dist[t]==inf)
			printf("Case #%d: unreachable\n",k+1);
		else
			printf("Case #%d: %d\n",k+1,dist[t]);
		for( int i=0; i<n; i++)
		{
			adjlist[i].clear();
		}
	}
}
