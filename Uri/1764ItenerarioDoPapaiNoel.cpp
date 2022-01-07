#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second

typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int find_parent( int parent[], int i)
{
	if(parent[i]==i)
		return i;
	return parent[i]=find_parent(parent,parent[i]);
}

void union_find(int parent[], int x, int y)
{
	parent[find_parent(parent,x)] = find_parent(parent,y);
}

int main()
{
	//~ freopen("entrada","r",stdin);
	//~ freopen("saida","w",stdout);
	
	int m,n;
	while( scanf("%d %d",&m,&n) && (m!=0 || n!=0) )
	{
		vector<ii> adj[m];
		priority_queue<iii, vector<iii>, greater<iii> > q;
		int parent[m];
		int x,y,d;
		for( int i=0; i<m; i++)
			parent[i]=i;
		
		for( int i=0; i<n; i++)
		{
			scanf("%d %d %d",&x,&y,&d);
			adj[x].push_back(ii(y,d));
			adj[y].push_back(ii(x,d));
			q.push(iii(d,ii(x,y)));
		}
		
		int dist=0;
		
		while(!q.empty())
		{
			int x = q.top().se.fi;
			int y = q.top().se.se;
			int a = find_parent(parent,x);
			int b = find_parent(parent,y);
			if(a != b)
			{
				dist+=q.top().fi;
				union_find(parent,x,y);
			}
			q.pop();
		}
		cout<<dist<<endl;
	}
}
