#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define max 25
#define inf 123456789
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

char mapa[max][max];
bool dist[max][max];

int cavi[]={-2,-1,1,2,2,1,-1,-2},cavj[]={1,2,2,1,-1,-2,-2,-1};
int di[]={-1,-1,0,1,1,1,0,-1},dj[]={0,1,1,1,0,-1,-1,-1};

int li,co,blobs;

void dfs( int x, int y)
{
	blobs++;
	dist[x][y]=0;
	for( int i=0; i<8; i++)
	{
		int xx=x+di[i],yy=y+dj[i];
		if(xx>=0 && yy>=0 && xx<li && yy<co && mapa[xx][yy]=='1' && dist[xx][yy])
			dfs(xx,yy);
	}
}

int main()
{
	//~ freopen("C:/Users/diogo okada/Desktop/entrada","r",stdin);
	//~ freopen("C:/Users/diogo okada/Desktop/saida","w",stdout);
	int n,slime,casos=0;
	cin>>n;
	
	string linha="";
	cin.ignore();

	getline(cin,linha);
	for( int k=0; k<n; k++)
	{
		co=0,li=0,blobs=0,slime=0;
		
		while(getline(cin,linha) && linha.size()!=0)
		{
			co=linha.size();
			for( int i=0; i<co; i++)
				mapa[li][i]=linha[i];
			li++;
		}
		for( int i=0; i<li; i++)
		{
			for( int j=0; j<co; j++)
			{
				dist[i][j]=1;
				//~ printf("%c",mapa[i][j]);
			}
			//~ cout<<endl;
		}
		
		
		for( int i=0; i<li; i++)
		{
			for( int j=0; j<co; j++)
			{
				if(mapa[i][j]=='1' && dist[i][j])
				{
					blobs=0;
					dfs(i,j);
					if(blobs>slime)
						slime=blobs;
				}
			}
		}
		
		if(casos++>0)
			cout<<endl;
		cout<<slime<<endl;
	}
}
