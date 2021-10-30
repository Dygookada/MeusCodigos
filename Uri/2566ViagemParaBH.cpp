#include <bits/stdc++.h>
using namespace std;

#define max 101
#define inf 123456789
#define f first
#define s second

typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int main()
{
	int n,m;
	ii dist[max];
	vector<ii> adjair[max];
	vector<ii> adjbus[max];
	while(cin>>n>>m)
	{
		for( int i=0; i<max; i++)
		{
			dist[i]=ii(inf,inf);
			adjair[i].clear();
			adjbus[i].clear();
		}
		int a,b,t,r;
		for( int i=0; i<m; i++)
		{
			cin>>a>>b>>t>>r;
			if(t==0)
				adjbus[a-1].push_back(ii(b-1,r));
			else
				adjair[a-1].push_back(ii(b-1,r));
		}
		queue<int> q;
		q.push(0);
		dist[0]=ii(0,0);
		while(!q.empty())
		{
			int u=q.front();
			q.pop();
			int ta=adjbus[u].size();
			for( int i=0; i<ta; i++)
			{
				ii v=adjbus[u][i];
				if(dist[v.f].f>dist[u].f+v.s)
				{
					dist[v.f].f=dist[u].f+v.s;
					q.push(v.f);
				}
			}
		}
		q.push(0);
		while(!q.empty())
		{
			int u=q.front();
			q.pop();
			int ta=adjair[u].size();
			for( int i=0; i<ta; i++)
			{
				ii v=adjair[u][i];
				if(dist[v.f].s>dist[u].s+v.s)
				{
					dist[v.f].s=dist[u].s+v.s;
					q.push(v.f);
				}
			}
		}
		if(dist[n-1].f>dist[n-1].s)
			cout<<dist[n-1].s<<endl;
		else
			cout<<dist[n-1].f<<endl;
		
	}
}
