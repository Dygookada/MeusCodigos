#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second

typedef pair<int,int>ii;
typedef pair<int,ii>iii;

int find( int parent[], int i)
{
	if(parent[i]==i)
		return i;
	return find(parent,parent[i]);
}

void union_find( int parent[], int a, int b)
{
	parent[find(parent,a)] = find(parent,b);
}

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int u,v,c;
	vector<iii> edge;
	for( int i=0; i<m; i++)
	{
		scanf("%d %d %d",&u,&v,&c);
		edge.push_back(iii(c,ii(u,v)));
	}
	
	sort(edge.begin(),edge.end());
	int parent[n+1],soma=0;
	for( int i=0; i<=n; i++)
		parent[i]=i;
	for( int i=0; i<edge.size(); i++)
	{
		int a = edge[i].se.fi;
		int b = edge[i].se.se;
		int x = find(parent,a);
		int y = find(parent,b);
		if(x!=y)
		{
			soma+=edge[i].fi;
			union_find(parent,a,b);
		}
	}
	printf("%d\n",soma);
}
