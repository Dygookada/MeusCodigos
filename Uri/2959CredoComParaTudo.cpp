#include <bits/stdc++.h>
using namespace std;

#define maxn 410
#define f first
#define s second
#define inf 123456789

typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int di[]={-1,0,1,0},dj[]={0,1,0,-1};

int n,m;
vector<int> adj[maxn];
bool vet[maxn][maxn],vis[maxn];


void dfs( int comeco, int ate)
{
	vet[comeco][ate]=1;
	vis[ate]=1;
	int ta=adj[ate].size();
	for( int i=0; i<ta; i++)
	{
		if(!vis[adj[ate][i]])
			dfs(comeco,adj[ate][i]);
	}
}

int main()
{
	int n,m,p,x,y;
	cin>>n>>m>>p;
	
	
	
	for( int i=0; i<m; i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	for( int i=1; i<=n; i++)
	{
		for( int j=0; j<=n; j++)
			vis[j]=0;
		
		dfs(i,i);
	}
	
	while(p--)
	{
		cin>>x>>y;
		if(vet[x][y])
			cout<<"Lets que lets\n";
		else
			cout<<"Deu ruim\n";
	}
}
