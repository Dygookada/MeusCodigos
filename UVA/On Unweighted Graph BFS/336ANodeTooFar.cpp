#include <bits/stdc++.h>
using namespace std;

#define max 101
#define inf 123456789
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;


int main()
{
	//~ freopen("C:/Users/diogo okada/Desktop/entrada","r",stdin);
	//~ freopen("C:/Users/diogo okada/Desktop/saida","w",stdout);
	int n,caso=1;
	
	
	while(cin>>n && n)
	{
		int ax,bx,elem=0;
		vector<ii> adjlist[n*2];
		map< int, int> nc;
		map< int, int> :: iterator it;
		int dist[n*2];
		for( int i=0; i<n; i++)
		{
			scanf(" %d%d",&ax,&bx);
			
			if( nc.count(ax)==0)
				nc[ax]=elem++;
			
			if( nc.count(bx)==0)
				nc[bx]=elem++;
				
			adjlist[nc[ax]].push_back(ii(nc[bx],bx));
			adjlist[nc[bx]].push_back(ii(nc[ax],ax));
			
		}
		int a,d,cont;
		while(cin>>a>>d && (a || d))
		{
			for( int i=0; i<elem; i++)
				dist[i]=inf;
			queue <int> q;
			//~ printf("%d\n",nc[a]);
			q.push(nc[a]);
			dist[nc[a]]=0;
			cont=1;
			while(!q.empty())
			{
				int u=q.front();
				q.pop();
				int ta=adjlist[u].size();
				
				for( int i=0; i<ta; i++)
				{
					int v=adjlist[u][i].f;
					
					if( dist[v]>dist[u]+1 && dist[u]+1<=d )
					{
						dist[v]=dist[u]+1;
						q.push(v);
						cont++;
						//~ printf("*%d dist:%d %d-%d\n",adjlist[u][i].s,dist[u],u,v);
					}
				}
			}
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",caso++,elem-cont,a,d);
		}
		
	}
}
