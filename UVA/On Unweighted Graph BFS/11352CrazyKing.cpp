#include <bits/stdc++.h>
using namespace std;

#define max 101
#define inf 999
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;


int main()
{
	//~ freopen("C:/Users/diogo okada/Desktop/entrada","r",stdin);
	//~ freopen("C:/Users/diogo okada/Desktop/saida","w",stdout);
	int t,m,n, cavi[]={-2,-1,1,2,2,1,-1,-2},cavj[]={1,2,2,1,-1,-2,-2,-1},di[]={-1,-1,0,1,1,1,0,-1},dj[]={0,1,1,1,0,-1,-1,-1};
	char mapa[max][max];
	int dist[max][max];
	cin>>t;
	for( int k=0; k<t; k++)
	{
		cin>>m>>n;
		ii a,b;
		for( int i=0; i<m; i++)
		{
			for( int j=0; j<n; j++)
			{
				dist[i][j]=inf;
				scanf(" %c",&mapa[i][j]);
				if( mapa[i][j]=='A' )
					a=ii(i,j);
				if( mapa[i][j]=='B' )
					b=ii(i,j);
			}
		}
		for( int i=0; i<m; i++)
		{
			for( int j=0; j<n; j++)
			{
				if(mapa[i][j]=='Z')
				{
					for( int z=0; z<8; z++)
					{
						int zi=i+cavi[z],zj=j+cavj[z];
						if( zi>=0 && zj>=0 && zi<m && zj<n && mapa[zi][zj]!='A' && mapa[zi][zj]!='B' && mapa[zi][zj]!='Z')
							mapa[zi][zj]='X';
					}
				}
			}
		}
		
		queue<ii> q;
		q.push(a);
		dist[a.f][a.s]=0;
		while(!q.empty())
		{
			ii u=q.front();
			q.pop();
			
			for( int i=0; i<8; i++)
			{
				int x=u.f+di[i],y=u.s+dj[i];
				if( x>=0 && y>=0 && x<m && y<n && (mapa[x][y]=='.' || mapa[x][y]=='B') && dist[x][y]>dist[u.f][u.s]+1)
				{
					//~ cout<<x<<" "<<y<<endl;
					dist[x][y]=dist[u.f][u.s]+1;
					q.push(ii(x,y));
				}
			}
		}
		
		if(dist[b.f][b.s]!=inf)
			printf("Minimal possible length of a trip is %d\n",dist[b.f][b.s]);
		else
			printf("King Peter, you can't go now!\n");
	}
}
