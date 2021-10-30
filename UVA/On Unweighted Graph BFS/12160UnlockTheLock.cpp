#include <bits/stdc++.h>
using namespace std;


#define max 10000
#define inf 123456789
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
//~ freopen("C:/Users/diogo okada/Desktop/Programinhas_do_Dyogo/UVA/entrada","r",stdin);
//~ freopen("C:/Users/diogo okada/Desktop/Programinhas_do_Dyogo/UVA/saida","w",stdout);

int main()
{
	freopen("C:/Users/diogo okada/Desktop/entrada","r",stdin);
	freopen("C:/Users/diogo okada/Desktop/saida","w",stdout);
	int l,u,r,cont=1,b;
	int dist[max];
	while( cin>>l>>u>>r && (l || u || r ))
	{
		for( int i=0; i<max; i++)
			dist[i]=inf;
		vector<int> buttons;
		for( int i=0; i<r; i++)
		{
			cin>>b;
			buttons.push_back(b);
		}
		
		queue<int> q;
		q.push(l);
		dist[l]=0;
		while(!q.empty())
		{
			int u=q.front();
			q.pop();
			int ta=buttons.size();
			for( int i=0; i<ta; i++)
			{
				int v=(u+buttons[i])%max;
				if(dist[v]>dist[u]+1)
				{
					dist[v]=dist[u]+1;
					q.push(v);
				}
			}
		}
		printf("Case %d: ",cont);
		cont++;
		if(dist[u]!=inf)
			printf("%d\n",dist[u]);
		else
			printf("Permanently Locked\n");
	}
}
