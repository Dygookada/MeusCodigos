#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	long long s[n],res[n];
	for( int i=0; i<n; i++)
	{
		cin>>s[i];
		res[i]=0;
	}
	for( int i=0; i<k; i++)
	{
		res[0]+=s[(n-i%n)%n];
	}
	for( int i=1; i<n; i++)
	{
		res[i]+=s[i]+res[i-1]-s[(n+i-k%n)%n];
	}
	for( int i=0; i<n; i++)
	{
		if(i>0)
			cout<<' ';
		cout<<res[i];
	}
	cout<<endl;
}
