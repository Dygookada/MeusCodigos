#include <bits/stdc++.h>
using namespace std;

#define max 1010
#define inf 123456789
#define f first
#define s second

typedef pair<int,int> ii;
typedef pair<int,ii> iii;


int main()
{
	int n,m,c,r,e,a,b;
	int dist[max];
	while(cin>>n>>m)
	{
		vector<int> adjlist[max];
		for( int i=0; i<n; i++)
			dist[i]=inf;
		for( int i=0; i<m; i++)
		{
			cin>>a>>b;
			adjlist[a-1].push_back(b-1);
			adjlist[b-1].push_back(a-1);
		}
		cin>>c>>r>>e;
		
		queue<int> q;
		q.push(c-1);
		dist[c-1]=0;
		while(!q.empty())
		{
			int u=q.front();
			//~ cout<<u<<endl;
			q.pop();
			int ta=adjlist[u].size();
			for( int j=0; j<ta; j++)
			{
				int v=adjlist[u][j];
				//cout<<"%%"<<v<<endl;
				if(dist[v]>dist[u]+1 && v!=(e-1))
				{
					dist[v]=dist[u]+1;
					q.push(v);
				}
			}
			
		}
		cout<<dist[r-1]<<endl;
	}
}
