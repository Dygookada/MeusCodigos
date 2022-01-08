#include <bits/stdc++.h>
using namespace std;


#define max 51
#define inf 123456789
#define f first
#define s second
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int main()
{
	int n,c,d,pulos=1;
	char caminho[max];
	int dist[max];
	cin>>n;
	for( int k=0; k<n; k++)
	{
		cin>>c>>d;
		for( int j=0; j<c; j++)
		{
			cin>>caminho[j];
			dist[j]=inf;
		}
		
		
		cout<<"Day #"<<pulos<<endl;
		cout<<c<<" "<<d<<endl;
		for( int i=0; i<c; i++)
			cout<<caminho[i];
		cout<<endl;
		
		pulos++;
		if(c<d)
			cout<<"1"<<endl;
		else
		{
			queue<int> q;
			q.push(0);
			dist[0]=0;
			while(!q.empty())
			{
				int u=q.front();
				q.pop();
				for( int i=d+1; i>0; i--)
				{
					if(i<c && caminho[u+i]=='.' && dist[u+i]>dist[u]+1)
					{
						dist[u+i]=dist[u]+1;
						q.push(u+i);
					}
				}
			}
			if(dist[c-1]!=inf)
				cout<<dist[c-1]<<endl;
			else
				cout<<"0"<<endl;
		}
		
		cout<<endl;
	}
}
