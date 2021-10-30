#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m;
	cin>>t;
	for( int i=0; i<t; i++)
	{
		cin>>n>>m;
		int votos[n],x,maxv=-1;
		for( int j=0; j<n; j++)
			votos[j]=0;
		for( int j=0; j<m; j++)
		{
			cin>>x;
			votos[x-1]++;
		}
		for( int j=0; j<n; j++)
		{
			if(maxv<votos[j])
				maxv=votos[j],x=j+1;
		}
		if(maxv>m/2)
			cout<<x<<endl;
		else
			cout<<-1<<endl;
	}
}
