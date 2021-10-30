#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int>ii;

int main()
{
	//~ freopen("saida","w",stdout);
	int emp,t,e,n;
	vector<int> amigos[2550];
	bool vis[2550];
	scanf(" %d",&emp);
	for( int i=0; i<emp; i++)
	{
		scanf(" %d",&n);
		for( int j=0; j<n; j++)
		{
			scanf(" %d",&e);
			amigos[i].push_back(e);
		}
	}
	scanf(" %d",&t);
	for( int i=0; i<t; i++)
	{
		memset(vis,false,sizeof vis);
		int dmax=-1,pesmax=-1,pesdia=0,dia;
		scanf(" %d",&e);
		queue<ii> q;
		q.push(ii(e,1));
		vis[e]=true;
		dia=1;
		while(!q.empty())
		{
			ii v=q.front();
			int ta=amigos[v.first].size(),pes=0;
			for( int j=0; j<ta; j++)
			{
				if(vis[amigos[v.first][j]]==false)
				{
					q.push(ii(amigos[v.first][j],v.second+1));
					vis[amigos[v.first][j]]=true;
					pes++;
				}
			}
			if(dia==v.second)
			{
				pesdia+=pes;
			}else
			{
				pesdia=pes;
				dia=v.second;
			}
			if(pesmax<pesdia)
			{
				pesmax=pesdia;
				dmax=dia;
			}
			q.pop();
		}
		if(pesmax==0)
			printf("0\n");
		else
			printf("%d %d\n",pesmax,dmax);
	}
}
