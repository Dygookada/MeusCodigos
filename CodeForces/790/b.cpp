#include <bits/stdc++.h>
using namespace std;

#define maxn 10e8

int main()
{
	int n;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		int ta,aux,soma=0,mi=maxn;
		cin>>ta;
		
		for( int j=0; j<ta; j++)
		{
			cin>>aux;
			soma+=aux;
			mi = min(mi,aux);
		}
		cout<<soma-mi*ta<<endl;
	}
}
