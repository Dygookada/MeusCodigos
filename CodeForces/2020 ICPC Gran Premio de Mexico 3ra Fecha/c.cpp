#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main()
{
	long long t,n,k;
	cin>>t;
	long long soma;
	for( int i=0; i<t; i++)
	{
		cin>>n>>k;
		n++;
		soma=((n*(n+1)/2)%mod*(k+1)%mod);
		cout<<soma<<endl;
	}
}
