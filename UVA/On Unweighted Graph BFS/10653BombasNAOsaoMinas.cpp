#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii; 
#define maxn 1010
#define inf 9999999
int r,c,grid[maxn][maxn],bomb;
bool vis[maxn][maxn];

int main()
{
	while( scanf(" %d%d",&r,&c) && ( r!=0 || c!=0) )
	{
		for( int i=0; i<r; i++)
		{
			for( int j=0; j<c; j++)
			{
				grid[i][j]=inf;
				vis[i][j]=false;
			}
		}
		scanf(" %d",&bomb);
		int aux,n,b;
		for( int i=0; i<bomb; i++)
		{
			scanf(" %d%d",&n,&aux);
			for( int j=0; j<aux; j++)
			{
				scanf(" %d",&b);
				vis[n][b]=true;
			}
		}
		int x,y,x1,y1,dx[]={1,0,-1,0},dy[]={0,1,0,-1};
		scanf(" %d%d%d%d",&x,&y,&x1,&y1);
		queue<ii> q;
		q.push(ii(x,y));
		grid[x][y]=0;
		while(!q.empty())
		{
			ii v=q.front();
			vis[v.first][v.second]=true;
			for( int i=0; i<4; i++)
			{
				int xx=v.first+dx[i],yy=v.second+dy[i];
				if( xx>=0 && xx<r && yy>=0 && yy<c && vis[xx][yy]==false && grid[xx][yy]==inf)
				{
					q.push(ii(xx,yy));
					grid[xx][yy]=grid[v.first][v.second]+1;
				}
			}
			q.pop();
		}
		printf("%d\n",grid[x1][y1]);
	}
}
