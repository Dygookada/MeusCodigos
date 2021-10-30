#include <bits/stdc++.h>
using namespace std;

#define max 101
#define inf 123456789
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int cavi[]={-2,-1,1,2,2,1,-1,-2},cavj[]={1,2,2,1,-1,-2,-2,-1};
int di[]={-1,-1,0,1,1,1,0,-1},dj[]={0,1,1,1,0,-1,-1,-1};

int main()
{
	//~ freopen("C:/Users/diogo okada/Desktop/entrada","r",stdin);
	//~ freopen("C:/Users/diogo okada/Desktop/saida","w",stdout);
	
	int n,m;
	char ini,fim;
	int dist[8][8];
	while(scanf(" %1c%1d %1c%1d",&ini,&n,&fim,&m)!=EOF)
	{
		for( int i=0; i<8; i++)
			for( int j=0; j<8; j++)
				dist[i][j]=inf;
		
		queue<ii> q;
		q.push(ii(ini-'a',n-1));
		dist[ini-'a'][n-1]=0;
		while(!q.empty())
		{
			ii u=q.front();
			q.pop();
			
			for( int i=0; i<8; i++)
			{
				int x=u.f+cavi[i],y=u.s+cavj[i];
				if(x>=0 && y>=0 && x<8 && y<8 && dist[x][y]>dist[u.f][u.s]+1)
				{
					dist[x][y]=dist[u.f][u.s]+1;
					q.push(ii(x,y));
				}
			}
		}
		//~ for( int i=0; i<8; i++)
		//~ {
			//~ for( int j=0; j<8; j++)
				//~ printf("%d ",dist[i][j]);
			//~ printf("\n");
		//~ }
		printf("To get from %c%d to %c%d takes %d knight moves.\n",ini,n,fim,m,dist[fim-'a'][m-1]);
	}
}
