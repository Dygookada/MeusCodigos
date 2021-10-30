#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int n,m,x,y,terra,mijid,dx[]={1,0,-1,0},dy[]={0,1,0,-1};
char matriz[20][20],land,agua;
bool mat[20][20];

void dfs( int x, int y)
{
	//~ matriz[x][y]='T';
	mat[x][y]=true;
	for( int i=0; i<4; i++)
	{
		int xt=(x+dx[i]),yt=(y+dy[i]+n)%n;
		if(xt>=0 && xt<m && matriz[xt][yt]==land && !mat[xt][yt])
		{
			terra++;
			dfs(xt,yt);
		}
	}
}

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	char aux;
	while(scanf(" %d%d",&m,&n)!=EOF)
	{
		for( int i=0; i<m; i++)
		{
			for( int j=0; j<n; j++)
			{
				scanf(" %c",&aux);
				matriz[i][j]=aux;
				mat[i][j]=false;
			}
		}
		terra=1,mijid=0;
		scanf(" %d%d",&x,&y);
		land=matriz[x][y];
		dfs(x,y);
		for( int i=0; i<m; i++)
		{
			for( int j=0; j<n; j++)
			{
				if(matriz[i][j]==land && !mat[i][j])
				{
					terra=1;
					dfs(i,j);
					mijid=max(mijid,terra);
				}
			}
		}
		printf("%d\n",mijid);
	}
}
