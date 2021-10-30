#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	while( cin>>n && n!=0)
	{
		vector<int> lista;
		int x,ind;
		for( int i=0; i<n; i++)
		{
			cin>>x>>ind;
			lista.insert(lista.begin()+ind-1,x);
		}
		for( int i=0; i<n; i++)
		{
			cout<<lista[i]<<" ";
		}
		cout<<endl;
	}
}
