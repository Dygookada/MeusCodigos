#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int main()
{
	int n,r,c,adj[110][110];
	bool vis[110][110];
	string nome;
	scanf(" %d",&n);
	for( int k=0; k<n; k++)
	{
		cin>>nome;
		scanf(" %d%d",&r,&c);
		for( int i=0; i<r; i++)
		{
			for( int j=0; j<c; j++)
			{
				scanf(" %d",&adj[i][j]);
			}
		}
		memset(vis,false,sizeof vis);
		queue<ii> q;
		for( int i=0; i<r; i++)
		{
			for( int j=0; j<c; j++)
			{
				
			}
		}
		
	}
}
