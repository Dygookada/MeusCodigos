#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	long long n,m,x,res;
	cin>>t;
	for( int i=0; i<t; i++)
	{
		cin>>n>>m>>x;
		res= (x-1)/n + ((x-1)%n)*m +1;
		cout<<res<<endl;
	}
}
