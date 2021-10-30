#include <bits/stdc++.h>
using namespace std;

#define max 101
#define inf 123456789
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int t,m,n;
char mapa[max][max];
int dist[max][max];

void zera_dist()
{
	for( int i=0; i<m; i++)
		for( int j=0; j<n; j++)
			dist[i][j]=inf;
}

void bfs( int a, int b)
{
	int di[]={-1,-1,0,1,1,1,0,-1},dj[]={0,1,1,1,0,-1,-1,-1};
	queue<ii> q;
	q.push( ii(a,b) );
	dist[a][b]=0;
	
	while(!q.empty())
	{
		ii u=q.front();
		q.pop();
		
		for( int i=0; i<8; i++)
		{
			int x=u.f+di[i], y=u.s+dj[i];
			if( x>=0 && y>=0 && x<m && y<n )
			{
				int um=1;
				if(mapa[u.f][u.s]==i+'0')
					um=0;
					
				if(dist[x][y]>dist[u.f][u.s] + um)
				{
					dist[x][y]=dist[u.f][u.s] + um;
					q.push(ii(x,y));
				}
				
			}
		}
	}
}

int main()
{
	freopen("C:/Users/diogo okada/Desktop/entrada","r",stdin);
	freopen("C:/Users/diogo okada/Desktop/saida","w",stdout);

	//~ int cavi[]={-2,-1,1,2,2,1,-1,-2},cavj[]={1,2,2,1,-1,-2,-2,-1};
	
	
	scanf(" %d%d",&m,&n);

	for( int i=0; i<m; i++)
	{
		for( int j=0; j<n; j++)
		{
			scanf(" %c",&mapa[i][j]);
			dist[i][j]=inf;
		}
	}
	scanf(" %d",&t);
	int ai,aj,bi,bj;
	bfs(0,0);
	for( int i=0; i<m; i++)
	{
		for( int j=0; j<n; j++)
			printf("%c ",mapa[i][j]);
		printf("|");
		for( int j=0; j<n; j++)
			printf("%d ",dist[i][j]);
		printf("\n");
	}
	printf("\n");
	zera_dist();
	bfs(5,6);
	for( int i=0; i<m; i++)
	{
		for( int j=0; j<n; j++)
			printf("%c ",mapa[i][j]);
		printf("|");
		for( int j=0; j<n; j++)
			printf("%d ",dist[i][j]);
		printf("\n");
	}
	//~ for( int k=0; k<t; k++)
	//~ {
		
		//~ scanf(" %d%d%d%d",&ai,&aj,&bi,&bj);
		
		//~ int inicio=dist[ai-1][aj-1];

		//~ printf("%d\n",dist[bi-1][bj-1]-inicio);
	//~ }
}
