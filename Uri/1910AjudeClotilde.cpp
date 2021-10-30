#include <bits/stdc++.h>
using namespace std;

#define inf 123456789
#define max 100000

int main()
{
	int o,d,k;
	while(cin>>o>>d>>k && (o!=0 || d!=0 || k!=0))
	{
		int block;
		int dist[100001];
		for( int i=0; i<max+1; i++)
			dist[i]=inf;
		for( int i=0; i< k; i++)
		{
			cin>>block;
			dist[block]=-inf;
		}
		queue<int> q;
		q.push(o);
		dist[o]=0;
		while(!q.empty())
		{
			
			int u=q.front();
			if(u==d)
				break;
			//cout<<u<<endl;
			q.pop();
			if(u+1<=max && dist[u+1]>dist[u]+1)
			{
				dist[u+1]=dist[u]+1;
				q.push(u+1);
			}
			if(u-1>0 && dist[u-1]>dist[u]+1)
			{
				dist[u-1]=dist[u]+1;
				q.push(u-1);
			}
			if(u*2<=max && dist[u*2]>dist[u]+1)
			{
				dist[u*2]=dist[u]+1;
				q.push(u*2);
			}if(u*3<=max && dist[u*3]>dist[u]+1)
			{
				dist[u*3]=dist[u]+1;
				q.push(u*3);
			}if(u%2==0 && dist[u/2]>dist[u]+1)
			{
				dist[u/2]=dist[u]+1;
				q.push(u/2);
			}
		}
		if(dist[d]==inf)
			cout<<-1<<endl;
		else
			cout<<dist[d]<<endl;
	}
}
