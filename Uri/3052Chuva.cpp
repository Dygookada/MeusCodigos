#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
#define f first
#define s second

int main()
{
//	freopen("entrada","r",stdin);
//	freopen("saida","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	char mat[n][m],aux;
	for( int i=0; i<n; i++)
	{
		for( int j=0; j<m; j++)
		{
			scanf(" %c",&aux);
			mat[i][j]=aux;
		}
	}
	int oj;
	for( int j=0; j<m; j++)
		if(mat[0][j]=='o')
			oj=j;
	
	queue<ii> q;
	q.push(ii(0,oj));
	while(!q.empty())
	{
		ii f=q.front();
		q.pop();
		//baixo direita esquerda
		int b=f.f+1,d=f.s+1,e=f.s-1;
		if(b<n && mat[b][f.s]!='#')
		{
			mat[b][f.s]='o';
			q.push(ii(b,f.s));
		}else if(b<n && mat[b][f.s]=='#')
		{
			if(d<m && mat[f.f][d]=='.')
			{
				mat[f.f][d]='o';
				q.push(ii(f.f,d));
			}
			if(e>=0 && mat[f.f][e]=='.')
			{
				mat[f.f][e]='o';
				q.push(ii(f.f,e));
			}
		}
	}
	for( int i=0; i<n; i++)
	{
		for( int j=0; j<m; j++)
		{
			printf("%c",mat[i][j]);
		}
		printf("\n");
	}
}
