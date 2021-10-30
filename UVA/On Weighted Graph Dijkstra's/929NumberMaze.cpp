#include <bits/stdc++.h>
using namespace std;

#define maxn 1010
#define inf 999999
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
#define f first
#define s second
int main()
{
	int n,x,y,grid[maxn][maxn],dist[maxn][maxn],dx[]={0,1,0,-1},dy[]={1,0,-1,0};
	scanf(" %d",&n);
	for( int k=0; k<n; k++)
	{
		scanf(" %d%d",&x,&y);
		for( int i=0; i<x; i++)
		{
			for( int j=0; j<y; j++)
			{
				scanf(" %d",&grid[i][j]);
			}
		}
		memset( dist, inf, sizeof dist);
		priority_queue<iii, vector<iii>, greater <iii> >q;
		q.push(iii(grid[0][0],ii(0,0)));
		dist[0][0]=grid[0][0];
		while(!q.empty())
		{
			iii v=q.top();
			q.pop();
			for( int i=0; i<4; i++)
			{
				int xx=v.s.f+dx[i],yy=v.s.s+dy[i];
				if( xx>=0 && xx<x && yy>=0 && yy<y && dist[xx][yy]>v.f+grid[xx][yy])
				{
					q.push(iii(grid[xx][yy]+v.f,ii(xx,yy)));
					dist[xx][yy]=grid[xx][yy]+v.f;
				}
			}
			
		}
		printf("%d\n",dist[x-1][y-1]);
	}
}
