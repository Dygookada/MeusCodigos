#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,soma1=0,soma2=0;
	cin>>n;
	
	for( int i=0; i<n; i++)
	{
		char aux;
		soma1=soma2=0;
		for( int j=0; j<3; j++)
		{
			cin>>aux;
			soma1+=aux-'0';
		}
		for( int j=0; j<3; j++)
		{
			cin>>aux;
			soma2+=aux-'0';
		}
		if(soma1==soma2)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
