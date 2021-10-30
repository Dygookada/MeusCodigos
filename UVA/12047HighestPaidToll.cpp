#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

#define inf -999999;
#define f first;
#define s second;

int main()
{
	int casos,vertices,arestas,inicio,fim,dinheiro,u,v,custo;
	cin>>casos;
	
	for( int k=0; k<casos; k++)
	{
		cin>>vertices>>arestas>>inicio>>fim>>dinheiro;
		vector<ii> adjlist[vertices];
		for( int i=0; i<vertices; i++)
		{
			cin>>u>>v>>custo;
			adjlist[u-1].push_back(ii(custo,v-1));
		}
		vector<int> dist(vertices,inf);
		dist[inicio]=0;
		priority_queue<ii> fila;
		fila.push(ii(0,inicio));
		while(!fila.empty())
		{
			ii f=fila.top();
			fila.pop();
			int ta=adjlist[fila.s].size();
			if(fila.f<dist[fila.s])
				continue;
			for( int i=0; i<ta; i++)
			{
				ii v=adjlist[u][i];	
				if(dist[fila.f]+v.f>dist[v.s] && )
				{
					dist[v.first]=dist[u]+v.second;
					pq.push(ii(dist[v.first],v.first));
				}
			}
		}
	}
}
