#include <bits/stdc++.h>

using namespace std;

#define inf 99999
#define maxn 110
typedef vector<int> vi;
vi adj[maxn];
vi dfslow[maxn];
vi dfsnum[maxn];
vi dfsparent[maxn];
int n,vertex,dfscount;

void APandB( int u)
{
	dfscount++;
	dfslow[u]=dfscount++;
	dfsnum[u]=dfscount++;
	int ta=adj[u].size();
	for( int i=0; i<ta; i++)
	{
		int v=adj[u][i];
		if( dfsnum[v]==false)
		{
			dfsparent[v]=u;				
			APandB(v);
			if(dfslow[v] >= dfsnum[u])
			{
				printf("%d*\n",u);
				vertex++;
			}
			dfslow[u]=min(dfslow[u],dfslow[v]);
		}
		else if(v!=dfsparent[u])
		{
			dfslow[u]=min(dfslow[u],dfsnum[v]);
		}
	}
}

int main()
{
	int tamanho,m;
	while( scanf(" %d",&tamanho) && tamanho!=0)
	{
		while( scanf(" %d",&n) && n!=0)
		{
			while( getchar()!='\n' )
			{
				scanf(" %d",&m);
				adj[n-1].push_back(m-1);
				adj[m-1].push_back(n-1);
			}
		}
		dfscount=0,vertex=0;
		//~ memset ( dfsnum ,99999 ,sizeof dfsnum);
		//~ memset ( dfslow,0,sizeof dfslow);
		//~ memset ( dfsparent,0,sizeof dfsparent);
		dfsnum.assing(n,inf);
		dfslow.assing(n,0);
		dfsparent.assing( n,0);
		for( int i=0; i<tamanho; i++)
		{
			if(dfsnum[i]==inf)
			{
				APandB(i);
			}
			printf("@%d %d\n",dfscount,dfsparent[i]);
		}
		printf("%d\n",vertex);
	}
}
