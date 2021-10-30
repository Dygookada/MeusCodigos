#include <bits/stdc++.h>
using namespace std;

#define maxn 12345
#define inf 123456789
#define f first
#define s second

typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int main()
{
	int c,v,g,a,b;
	int dist[maxn];
	vector<ii> adj[maxn];
	vector<ii> par[maxn];
	cin>>c>>v;
	for( int i=0; i<v; i++)
	{
		cin>>a>>b>>g;
		adj[a].push_back(ii(b,g));
		adj[b].push_back(ii(a,g));
	}

	
	//grafo auxiliar 
	for( int x=1; x<=c; x++)
	{
		int t=adj[x].size();
		for( int i=0; i<t; i++)
		{
			int y=adj[x][i].f,t2=adj[y].size(),d1=adj[x][i].s;

			for( int j=0; j<t2; j++)
			{
				
				int z=adj[y][j].f,d2=adj[y][j].s;
				
				if(x!=z)
				{
					//~ cout<<"J"<<j<<": "<<x<<"-"<<y<<"-"<<z<<"#"<<d1<<"#"<<d2<<endl;
					par[x].push_back(ii(z,d1+d2));
				}
			}

		}
		
	}
	
	//~ for( int x=1; x<=c; x++)
	//~ {
		//~ int t=par[x].size();
		//~ for( int j=0; j<t; j++)
			//~ cout<<"x="<<x<<" z="<<par[x][j].f<<" dist:"<<par[x][j].s<<endl;
	//~ }
	
	for( int i=0; i<=c; i++)
		dist[i]=inf;
	
	priority_queue<ii, vector<ii>, greater<ii>>q;
	//~ (distancia,vertice)
	dist[1]=0;
	q.push(ii(0,1));
	while(!q.empty())
	{
		ii u=q.top();
		q.pop();
		int ta=par[u.s].size();
		//~ cout<<u.s<<"  "<<u.f<<endl;
		for( int i=0; i<ta; i++)
		{
			ii fr=par[u.s][i];
			if(dist[fr.f]>dist[u.s]+fr.s)
			{
				dist[fr.f]=dist[u.s]+fr.s;
				q.push(ii(fr.s,fr.f));
			}
		}
	}
	if(dist[c]!=inf)
		cout<<dist[c]<<endl;
	else
		cout<<-1<<endl;
		
}
