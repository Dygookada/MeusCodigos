#include <bits/stdc++.h>
using namespace std;


#define f first
#define s second
#define maxn 200000

bool vis[100000100];

int main()
{
	int n,aux;
	long long x;
	vector<int> pulos;
	cin>>n>>x;
	for( int i=0; i<n; i++)
	{
		cin>>aux;
		pulos.push_back(aux);
		
	}
	cout<<"Ta indo"<<endl;
	if(x<0)
		x=-x;
	bool flag=true;
	cout<<x<<endl;
	queue< long long> q;
	q.push(0);
	while(!q.empty() && flag)
	{
		long long u=q.front(), ta=pulos.size();
		q.pop();
		cout<<u<<" ";
		if(vis)
		{
			if(u==x)
			{
				flag=false;
			}
			for( int i=0; i<ta; i++)
			{
				if(u+pulos[i]<=x)
					q.push(u+pulos[i]);
			}
		}
	}
	if(!flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
