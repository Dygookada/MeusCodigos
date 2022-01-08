#include <bits/stdc++.h>
using namespace std;

#define maxn 10010

int main()
{
	int a[maxn],b[maxn];
	bool deu=true;
	int n,m,x,y;
	cin>>n;
	for( int i=0; i<n; i++)
		cin>>a[i];
	for( int i=0; i<n; i++)
		b[i]=0;
	
	cin>>m;
	for( int i=0; i<m; i++)
	{
		cin>>x>>y;
		b[x-1]=1-b[x-1];
		b[y-1]=1-b[y-1];
	}
	
	for( int i=0; i<n; i++)
		if(a[i]!=b[i])
			deu=false;
	
	if(deu)
		cout<<"Yes\n";
	else
		cout<<"No\n";
}
