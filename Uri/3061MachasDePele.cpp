#include <bits/stdc++.h>
using namespace std;

#define maxn 1010
#define f first
#define s second
#define inf 123456789

typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int di[]={-1,0,1,0},dj[]={0,1,0,-1};

int n,m;
int vet[maxn][maxn];
queue<ii>q;


//~ void dfs( int x, int y)
//~ {
	//~ vet[x][y]=2;
	//~ int a,b;
	//~ for( int k=0; k<4; k++)
	//~ {
		//~ a=x+di[k],b=y+dj[k];
		//~ if(a>=0 && a<n && b>=0 && b<m && vet[a][b]==1)
		//~ {
			//~ dfs(a,b);
		//~ }
	//~ }
	//~ return;
//~ }

void bfs( int x, int y)
{
	q.push(ii(x,y));
	int a,b;
	while(!q.empty())
	{
		ii u=q.front();
		q.pop();
		vet[u.f][u.s]=2;
		for( int k=0; k<4; k++)
		{
			a=x+di[k],b=y+dj[k];
			if(a>=0 && a<n && b>=0 && b<m && vet[a][b]==1)
				bfs(a,b);
		}
		
	}
}

int main()
{
	cin>>n>>m;
	for( int i=0; i<n; i++)
	{
		for( int j=0; j<m; j++)
		{
			cin>>vet[i][j];
		}
	}
	int cont=0;

	for( int i=0; i<n; i++)
	{
		for( int j=0; j<m; j++)
		{
			if(vet[i][j]==1)
				bfs(i,j),cont++;
		}
	}
	cout<<cont<<endl;
	
}
