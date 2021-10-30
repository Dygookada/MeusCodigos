#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,aux;
	cin>>t;
	for( int i=0; i<t; i++)
	{
		set<int> carn;
		cin>>n;
		for( int j=0; j<n; j++)
		{
			cin>>aux;
			carn.insert(aux);
		}
		cout<<carn.size()<<endl;
	}
}
