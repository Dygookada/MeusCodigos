#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int grid[110][110],R,C,M,N,par,imp,cont;
bool vis[110][110];

void bfs( int x, int y)
{
	queue<ii> q;
	q.push(ii(x,y));
	par=0,imp=0,cont=0;
	//~ int xx[8],yy[8];
	//~ int xx[]={N,M,M,N,-N,-M,-M,-N},yy[]={M,N,-N,-M,-M,-N,N,M};
	set<ii> pulo;
	pulo.insert(ii(N,M));
	pulo.insert(ii(M,N));
	pulo.insert(ii(M,-N));
	pulo.insert(ii(N,-M));
	pulo.insert(ii(-N,-M));
	pulo.insert(ii(-M,-N));
	pulo.insert(ii(-M,N));
	pulo.insert(ii(-N,M));
	set<ii> :: iterator it;
	while(!q.empty())
	{
		vis[x][y]=true;
		x=q.front().first;
		y=q.front().second;
		int casa=0;
		for( it=pulo.begin(); it!=pulo.end(); it++)
		{
			int xm=x+it->first,yn=y+it->second;
			//~ int xm=x+xx[i]*M,yn=y+yy[i]*N,xn=x+xx[i]*N,ym=y+yy[i]*M;
			if( xm>=0 && xm<R && yn>=0 && yn<C)
			{
				if(vis[xm][yn]==false)
				{
					q.push(ii(xm,yn));
					vis[xm][yn]=true;
				}
				if( grid[xm][yn]!=-2)
					casa++;
			}
		}
		grid[x][y]=casa;
		if(casa%2==0)
			par++;
		else
			imp++;
		q.pop();
		cont++;
	}
}

int main()
{
	//~ freopen("saida","w",stdout);
	int T,x,y;
	scanf(" %d",&T);
	for( int i=0; i<T; i++)
	{
		int w;
		scanf(" %d%d%d%d%d",&R,&C,&M,&N,&w);
		for( int j=0; j<R; j++)
			for( int k=0; k<C; k++)
				grid[j][k]=-1;
		for( int j=0; j<w; j++)
		{
			scanf(" %d%d",&x,&y);
			grid[x][y]=-2;
			vis[x][y]=true;
		}
		bfs(0,0);
		printf("Case %d: %d %d\n",i+1,par,imp);
		for( int j=0; j<R; j++)
		{
			for( int k=0; k<C; k++)
				vis[j][k]=false;
				//~ printf("%d ",grid[j][k]);
			//~ printf("\n");
		}
	}
}
