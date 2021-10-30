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
	//~ freopen("C:/Users/diogo okada/Desktop/Programinhas_do_Dyogo/Uri/entrada","r",stdin);
	//~ freopen("C:/Users/diogo okada/Desktop/Programinhas_do_Dyogo/Uri/saida","w",stdout);

	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	
	int n,m,x,y,c,t,k,tempo,x1,y1,cont=1;
	vector<iii> adjlist[max];
	ii dist[max];
	while(cin>>n>>m && (n!=0 || m!=0))
	{
		
		cout<<"Instancia "<<cont<<endl;
		cont++;
		
		for( int i=0; i<m; i++)
		{
			cin>>x>>y>>c>>t;
			adjlist[x-1].push_back(iii(y-1,ii(c,t)));
		}
		cin>>k;
		for( int i=0; i<k; i++)
		{
			for( int a=0; a<max; a++)
			{
				dist[a]=ii(inf,inf);
			}
			cin>>x1>>y1>>tempo;
			queue<int> q;
			q.push(x1-1);
			dist[x1-1]=ii(0,0);
			while(!q.empty())
			{
				int u=q.front(),tam=adjlist[u].size();
				q.pop();
				for( int j=0; j<tam; j++)
				{
					iii v=adjlist[u][j];
					if( dist[u].s+v.s.s<=tempo && dist[v.f].f>dist[u].f + v.s.f)
					{
						dist[v.f].f=dist[u].f + v.s.f;
						dist[v.f].s=dist[u].s + v.s.s;
						q.push(v.f);
					}
				}
			}
			//~ cout<<dist[y1-1].f<<" = "<<dist[y1-1].s<<endl;
			
			if(dist[y1-1].f!=inf)
				cout<<"Possivel - "<<dist[y1-1].f<<" km, "<<dist[y1-1].s<<" min\n";
			else
				cout<<"Impossivel"<<endl;
			
			//~ for( int a=0; a<max; a++)
			//~ {
				//~ cout<<dist[a].f<<" = "<<dist[a].s<<endl;
			//~ }
			
		}
		cout<<endl;
		for( int i=0; i<max; i++)
			adjlist[i].clear();
	}
}
