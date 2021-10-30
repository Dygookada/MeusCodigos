#include <bits/stdc++.h>
using namespace std;

int R,C,dx[]={1,1,0,-1,-1,-1,0,1},dy[]={0,1,1,1,0,-1,-1,-1};
char grid[110][110];

int floodfill( int r, int c, char c1, char c2)
{
	if( r<0 || r>=R || c<0 || c>=C)
		return 0;
	if( grid[r][c]!=c1)
		return 0;
	grid[r][c]=c2;
	int cont=1;
	for( int i=0; i<8; i++)
	{
		floodfill(r+dx[i],c+dy[i],c1,c2);
	}
	return cont;
}

int main()
{
	int n,m;
	char aux;
	while( scanf(" %d%d",&R,&C) && (R!=0 || C!=0))
	{
		n=0;
		for( int i=0; i<R; i++)
		{
			for( int j=0; j<C; j++)
			{
				scanf(" %c",&aux);
				grid[i][j]=aux;
			}
		}
		for( int i=0; i<R; i++)
		{
			for( int j=0; j<C; j++)
			{
				if(grid[i][j]=='@')
				{
					m=floodfill(i,j,'@','N');
					n++;
					if(m>100)
						n++;
				}	
			}
		}
		printf("%d\n",n);
	}
}
  
