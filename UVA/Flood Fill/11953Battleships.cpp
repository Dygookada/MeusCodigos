#include <iostream>
#include <stdio.h>
using namespace std;

int dx[]={1,0,-1,0},dy[]={0,1,0,-1},t,n;
char matriz[110][110];

void dfs( int x, int y)
{
	matriz[x][y]='.';
	for( int i=0; i<4; i++)
	{
		if(x+dx[i]>=0 && x+dx[i]<n && y+dy[i]>=0 && y+dy[i]<n)
		{
			if(matriz[x+dx[i]][y+dy[i]]!='.')
			{
				dfs(x+dx[i],y+dy[i]);
			}
		}
	}
	return;
}

int main()
{
	scanf("%d",&t);
	for( int i=0; i<t; i++)
	{
		scanf("%d",&n);
		int navios=0;
		char aux;
		for( int j=0; j<n; j++)
		{
			for (int k=0; k<n; k++)
			{
				scanf(" %c",&aux);
				matriz[j][k]=aux;
			}
		}
		for( int j=0; j<n; j++)
		{
			for (int k=0; k<n; k++)
			{
				if(matriz[j][k]=='x')
				{
					dfs(j,k);
					navios++;
				}
			}
		}
		//~ Case 1: 2
		printf("Case %d: %d\n",i+1,navios);
	}			
}
