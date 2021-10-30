#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,v,aux=0,cont=0;
	cin>>n;
	for( int i=0; i<n; i++)
	{
		cin>>v;
		if(v!=aux)
			cont++,aux=v;
	}
	cout<<cont<<endl;
}
