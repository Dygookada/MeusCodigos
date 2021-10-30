#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
#define f first
#define s second
#define inf 999999

int main()
{
	int n;
	scanf(" %d",&n);
	for( int k=0; k<n; k++)
	{
		if(k>0)
			cout<<endl;
		vector<int> adj[210];
		map<string,int> pa;
		string pa1,pa2;
		vector<string> world;
		int d=0,dist[210];
		while(cin>>pa1 && pa1!="*")
		{
			pa[pa1]=d;
			for( int i=0; i<(int)world.size(); i++)
			{
				if(world[i].size()==pa1.size())
				{
					int ta=pa1.size(),dif=0;
					for( int j=0; j<ta; j++)
					{
						if(world[i][j]!=pa1[j])
							dif++;
					}
					if(dif==1)
					{
						adj[i].push_back(d);
						adj[d].push_back(i);
					}
				}
			}
			world.push_back(pa1);
			d++;
		}

		cin.ignore();
		string linha;
		while(getline(cin,linha)&& linha[0]!='\0')
		{
			stringstream aux;
			aux<<linha;
			aux>>pa1;
			aux>>pa2;
			queue<int> q;
			for( int i=0; i<d; i++)
				dist[i]=inf;
			int a=pa[pa1],b=pa[pa2];
			dist[a]=0;
			q.push(a);
			while(!q.empty())
			{
				int v=q.front(),ta=adj[v].size();
				q.pop();
				for( int i=0; i<ta; i++)
				{
					int u=adj[v][i];
					if(dist[u]==inf)
					{
						dist[u]=dist[v]+1;
						q.push(u);
					}
				}
			}
			cout<<pa1<<' '<<pa2<<' '<<dist[b]<<endl;
		}
	}
}
