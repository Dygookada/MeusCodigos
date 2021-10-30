#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,f,cont=0;
	cin>>n>>a>>f;
	int v[n];
	for( int i=0; i<n; i++)
	{
		cin>>v[i];
	}
	sort(v,v+n);
	int j;
	for( int i=0; i<n; i++)
	{
		for( j=i+1; j<n; j++)
		{
			if(v[i]+v[j]<=f && v[i]+v[j]>=a)
			{
				cont++;
			}
		}
	}
	cout<<cont<<endl;
}
