#include <bits/stdc++.h>
using namespace std;

#define maxn 20000
#define inf -1
#define f first
#define s second

typedef pair<int,int> ii;
typedef pair<long long,ii> iii; 
int main()
{
	int l,c;
	
	cin>>l>>c;
	int mapa[l][c];
	long long dist[l][c];
	for( int i=0; i<l; i++)
	{
		for( int j=0; j<c; j++)
		{
			cin>>mapa[i][j];
			dist[i][j]=-1;
		}
	}
	priority_queue<iii> q;
	for( int i=0; i<l; i++)
	{
		q.push(iii(mapa[i][0],ii(i,0)));
		dist[i][0]=mapa[i][0];
	}
	while(!q.empty())
	{
		iii u=q.top();
		q.pop();
		if(u.f<dist[u.s.f][u.s.s])
			continue;
		for( int i=-1; i<2; i++)
		{
			// precisa sempre descer uma coluna
			// precisa SO, Sul, SL
			int a=u.s.f+i,b=u.s.s+1;
			if(a>=0 && a<l && b<c && u.f+mapa[a][b]>dist[a][b])
			{
				dist[a][b]=u.f+mapa[a][b];
				//cout<<a<<"-"<<b<<" "<<dist[a][b]<<endl;
				q.push(iii(dist[a][b],ii(a,b)));
			}
		}
	}
	long long res=0;
	for( int i=0; i<l; i++)
	{
		/*
		for( int j=0; j<c; j++)
			cout<<dist[i][j]<<" ";
		cout<<endl;
		*/
		res= max(res,dist[i][c-1]);
	}
	cout<<res<<endl;
}
