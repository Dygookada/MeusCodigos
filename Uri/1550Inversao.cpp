#include <bits/stdc++.h>
using namespace std;

#define max 10000
#define inf 123456789

int main()
{
	int t,a,b;
	cin>>t;
	int dist[max+1];
	for( int i=0; i<t; i++)
	{
		for( int i=0; i<max+1; i++)
			dist[i]=inf;
		cin>>a>>b;
		queue<int> q;
		q.push(a);
		dist[a]=0;
		
		while(!q.empty())
		{
			int u=q.front();
			q.pop();
			if(u==b)
				break;
			//~ cout<<u<<endl;
			if(u+1<max && dist[u+1]>dist[u]+1)
			{
				dist[u+1]=dist[u]+1;
				q.push(u+1);
			}
			
			int inv=0,ori=u;
			while(ori)
			{
				inv=inv*10+ori%10;
				ori=ori/10;
				
			}
			//~ cout<<"Invertido: "<<inv<<endl;
			if(inv<max && dist[inv]>dist[u]+1)
			{
				dist[inv]=dist[u]+1;
				q.push(inv);
			}
		}
		cout<<dist[b]<<endl;
	}
}
