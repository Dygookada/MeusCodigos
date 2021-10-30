#include <bits/stdc++.h>

using namespace std;
#define MAX 50010
typedef vector<int>vi;
vi g[MAX];
int h[MAX];
bool visitado[MAX];
int dfs(int u, int distancia, int pai)
{
	visitado[u] = 1;
	h[u] = distancia;
	
	for(int i = 0; i < (int)g[u].size(); i++)
	{
		int v = g[u][i];
		if(!visitado[v])
		{
			h[u] = dfs(v,distancia+1,u);
		}else if(v!=pai)
		{
			h[u] = max(h[u],h[v]+1);
		}
	}
	
	return h[u];
	// ou retorna a distancia
}

int main()
{
	int N,V,lig1,lig2,maxaltura,vertice;
	scanf("%d",&N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&V);
		for(int j = 0; j < V; j++)
		{
			scanf("%d%d",&lig1,&lig2);
			g[lig1].push_back(lig2);
			//g[lig2].push_back(lig1);
		}
		
		for(int j = 1; j <= V; j++)
		{
			if(!visitado[j])
			{
				dfs(j,0,j);
			}
		}
		maxaltura = 0;
		vertice = 1;
		for(int j = 1; j <= V; j++)
		{
			if(h[j] > maxaltura)
			{
				maxaltura = h[j];
				vertice = j;
			}
		}
	
		printf("Case %d: %d\n",i+1,vertice);
		for(int j = 1; j <= V; j++)
		{
			g[j].clear();
			visitado[j] = 0;
			h[j] = 0;
		}
	}

}
