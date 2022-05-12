#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef pair<long long, long long> ll;
#define INF 123456789

int main()
{
	int n,m,q;
	cin>>n>>m>>q;
	int a,b,c;
	int graph[n][n];
	ll dist[n][n];
	ll d[n][n];
	for( int i=0; i<m; i++)
	{
		cin>>a>>b>>c;
		dist[a-1][b-1]={c,0};
		d[a-1][b-1]={0,c};
	}
	for (int k = 0; k < n; ++k) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (dist[i][k] < INF && dist[k][j] < INF)
				{
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
			}
		}
	}
	for (int k = 0; k < n; ++k) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (dist[i][k] < INF && dist[k][j] < INF)
				{
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}	
			}
		}
	}
	for( int i=0; i<q; i++)
	{
		cin>>a>>b>>c;
		cout<<dist[a-1][b-1]+d[a-1][b-1]*c<<endl;
	}
}
